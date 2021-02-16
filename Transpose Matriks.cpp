#include <iostream>
using namespace std;

int main()
{
    int matriksA[2][2], transposeMatriksA[2][2], jumlah, hasil[2][2];
    int m=2, n=2, i, j;
    cout << "Masukkan elemen matriks pertama : " << endl;
    for( i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            cin>>matriksA[i][j];
        }
    }

    //TRANSPOSE MATRIKS

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++ )
        {
            transposeMatriksA[j][i]=matriksA[i][j];
        }
    }

    cout<< "Transpose Matriks A : "<<endl;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++ )
        {
            cout<<transposeMatriksA[i][j]<< " ";
        }
        cout<<endl;
    }



    return 0;
}