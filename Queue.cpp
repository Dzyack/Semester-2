#include <iostream>
#define MAX 10


using namespace std;


    string data[MAX];
    int front = -1;

    bool isEmpty() {
        bool empty = (front == -1)? true : false;
        return empty;
    }

    bool isFull() {
        bool full = (front == 9)? true : false;
        return full;
    }

    void enqueue() {
        if(isFull()){
            cout<<"Antrian Penuh\n";
        }
        else{
            front++;
            cout<<"Input Data : ";
            cin>>data[front];
        }

    }

    void dequeue() {
        if(isEmpty()){
            cout<<"Antrian Kosong\n";
        }
        else{
            cout<<"Data yang diambil : "<< data[0]<<endl;
            front--;

            for (int i = 0; i <= front; i++)
            {
                data[i] = data[i+1];
            }
        }
    }

    void clear(){
        front = -1;
        cout<<"Antrian sudah kosong\n";

    }

    void print()
    {
        if (!isEmpty())
        {
            for (int i = 0; i <= front; ++i)
            {
                cout<<"Data ke-"<<i+1<<" = "<<data[i]<<endl;
            }
        }
        else
        {
            cout<<"Antrian Kosong\n";
        }

    }


int	main(int argc, char const *argv[])
{
	int choose;
	do{
        cout<<"Menu :\n";
        cout<<"1. Enqueue\n";
        cout<<"2. Dequeue\n";
        cout<<"3. Clear\n";
        cout<<"4. Print\n";
        cout<<"5. Exit\n";
        cout<<"Pilih menu [1/2/3/4/5] : "; cin>>choose;

	switch(choose)
	{
		case 1 :
            int jumlah;
            cout<<"Input jumlah data : ";
            cin>>jumlah;
            for (int i = 0; i < jumlah; ++i)
            {
                enqueue();
            }
            break;

		case 2 :
            dequeue();
            break;


		case 3 :
		    clear();
            break;

		case 4 :
		    cout<<"Isi antrian : \n";
            print();
            break;

		case 5 :
		    exit(0);
            break;

	}

	}while(choose != 5);


	return 0;
}