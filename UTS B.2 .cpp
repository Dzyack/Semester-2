#include <iostream>

using namespace std;

int main()
{
    int a;
    int iwan[3] = {70,89,95};
    int adi[3] = {87,79,99};
    int rani[3] = {85,77,93};
    double mMatkul[3];
    double jum1,jum2,jum3;

    for(a=0; a<=2; a++)
    {
        mMatkul[a]= iwan[a]+adi[a]+rani[a];
    }

    mMatkul[0] /= a;
    mMatkul[1] /= a;
    mMatkul[2] /= a;

    for( a=0; a<=2; a++)
    {
        jum1 += iwan[a];
        jum2 += adi[a];
        jum3 += rani[a];

    }
    jum1 = jum1 / a;
    jum2 = jum2 / a;
    jum3 = jum3 / a;

    cout<< "Rata-rata matkul : \n";
    cout<< "Pancasila : "<<mMatkul[0]<<endl;
    cout<< "Algoritma : "<<mMatkul[1]<<endl;
    cout<< "B.Indonesia : "<<mMatkul[2]<<endl<<endl;

    cout<< "Rata-rata Mahasiswa : \n"<< "Iwan : "<<jum1<<endl;
    cout<< "Adi : "<<jum2<<endl;
    cout<< "Rani : "<<jum3<<endl;

    return 0;
}