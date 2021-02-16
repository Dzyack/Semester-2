#include <iostream>
using namespace std;

int main()
{
    int matriksA[2][2], matriksB[2][2], jumlah, hasil[2][2];
    int m=2, n=2, p=2, q=2, i, j, k;
    cout << "Masukkan elemen matriks pertama : " << endl;
    for( i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            cin>>matriksA[i][j];
        }
    }

    cout << "Masukkan elemen matriks kedua : " << endl;
    for( i = 0; i < p; i++)
    {
        for( j = 0; j < q; j++)
        {
            cin>>matriksB[i][j];
        }
    }

    for( i = 0; i < m; i++)
    {
        for( j = 0; j < q; j++)
        {
            for( k = 0; k < p; k++)
            {
                jumlah = jumlah + matriksA[i][k]*matriksB[k][j];
            }
            hasil[i][j] = jumlah;
            jumlah = 0;
        }
    }

    cout<<"Hasil perkalian : "<<endl;
    for( i = 0; i < m; i++)
    {
        for( j = 0; j < n; j++)
        {
            cout<<hasil[i][j]<<" ";
        }
        cout<<endl<<endl;
    }
    
    
    



    return 0;
}