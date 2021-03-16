#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

int stack1[MAX];
int stack2[MAX];
int top = -1;
void push(int);
int pop();
void display();

void push(int element)
{
    if(top == MAX-1)
    {
        printf("Stack Penuh\n\n");
        return;
    }
    top = top + 1;
    stack1[top] = element;
    printf("\n");
}

int pop()
{
    int element;
    if(top == -1)
    {
        printf("Stack kosong");
        cout<<endl<<endl;
    }
    else
    {
        element = stack1[top];
        top -= 1;
        printf("%d telah dihapus",element);
        cout<<endl<<endl;
    }


}

void display()
{
    if(top == -1)
    {
        printf("Stack kosong");
        return;
    }
    printf("\n\n");
    for(int i=top; i>=0; i--)
    {
        printf("%d\n",stack1[i]);
    }
    cout<<endl;
}

int main()
{
    int choose,input;
    while(true)
    {
        printf("Menu\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Masukkan Pilihan[1/2/3/4] : ");
        scanf("%d",&choose);
        switch(choose)
        {
            case 1:
                printf("Input data pada Stack : ");
                scanf("%d",&input);
                push(input);
                break;
            case 2:
                input = pop();
                break;
            case 3 :
                display();
                break;
            case 4 :
                exit(0);

        }

    }

    return 0;
}