#include <iostream>
#include <conio.h>
#define MAX 5

using namespace std;

int stack1[MAX];
int top = 4;
int pop();


int pop()
{
    int element;
    if(top == -1)
    {
        printf("Stack kosong");
        exit(0);
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

int main()
{
    int a=0;
    cout<< "Isi stack : ";
    for(int i=0; i<MAX; i++)
    {
        cin>>stack1[i];
    }
    cout<< "Isi Stack : "<<endl;
        for(int i=MAX-1; i>=0; i--)
        {
            cout<<stack1[i]<<endl<<endl;
        }
    while(true)
    {

        getch();
        pop();

    }
    return 0;
}