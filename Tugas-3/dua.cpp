#include <stdio.h>
#include <ctype.h> 
#include <iostream> 
#include <conio.h>
using namespace std;

int main ()
{
  int i=0;
  char nama[100]; 
  char c; 
  
  cout<<"Masukkan Nama = "; gets(nama);
  cout<<"\nNamamu versi huruf kecil = "; 
  
  while (nama[i]) 
   {
   c=nama[i]; 
   if (isupper(c)) c=tolower(c); 
   putchar (c); 
   i++; 
   }
}
