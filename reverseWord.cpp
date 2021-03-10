#include<iostream>
#include<string.h>

using namespace std;

int main(){
  
  char input[100];
  cout<<"Masukkan kalimat : ";cin.getline(input,sizeof(input));
  int x = strlen(input);
  
  cout<<"Setelah dibalik : ";
  for(int i=x-1;i>=0;i--){
    cout<<input[i];
  }
  return 0;
}