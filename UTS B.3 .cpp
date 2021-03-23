#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <windows.h>

using namespace std;

COORD coord = {0,0};

void gotoxy(int x, int y)
{
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int main()
{
    string data[3][3];
    string jum;

    cout<< "=================================================================\n";
    cout<< "| No |     Nama Mahasiswa      |   Gol Darah  | Jumlah Saudara  |\n";
    cout<< "-----------------------------------------------------------------\n";
    cout<< "|  1 |                         |              |                 |\n";
    cout<< "-----------------------------------------------------------------\n";
    cout<< "|  2 |                         |              |                 |\n";
    cout<< "-----------------------------------------------------------------\n";
    cout<< "|  3 |                         |              |                 |\n";
    cout<< "=================================================================\n";

    for(int i=0; i<3; i++)
    {
        int enter = 0;
        for(int j=0; j<3; j++)
        {
            if(i==1)
            {
                gotoxy(22*(i+1)-(i*6),3+j+enter);
                cin>>data[i][j];
            }
            else if(i == 2)
            {
                gotoxy(22.3*(i+1)-(i*6),3+j+enter);
                cin>>data[i][j];

            }
            else if(i==0)
            {
                gotoxy(8*(i+1)-(i*6),3+j+enter);
                cin>>data[i][j];
            }
                enter++;

        }
    }

    return 0;

}