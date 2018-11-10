#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int nilai;
 cout<<"Masukkan Batas Nilai :";cin>>nilai;
 
 if(nilai<=10){
 
 for(int a = 1; a <= nilai; a++)
 {
  for(int b = 1; b <= a; b++)
  {
  cout<<b<<", ";
  }
 cout<<endl;
 }
}
else
{
	cout<<"Batas Maksimal Tidak Boleh Lebih Dari 10"<<endl;
}
}
