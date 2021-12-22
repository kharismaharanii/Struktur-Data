#include <iostream>
#include <conio.h>
#define max 10
#include <cstdlib>
using namespace std;

struct tumpukan
{
	int atas;
	char data[max];
}T;

void awal()
{
	T.atas=-1;
}

int kosong()
{
	if(T.atas == -1)
	return 1;
	else
	return 0;
}

int penuh()
{
	if(T.atas==max-1)
	return 1;
	else
	return 0;
}

void input(char data) 
{
	if(kosong()==1)
	{T.atas++;
		T.data[T.atas]=data;
		cout <<"Data" << T.data[T.atas]<<"Masuk ke stack";}
	else if(penuh()==0)
	{T.atas++;
		T.data[T.atas]=data;
		cout <<"Data" <<T.data[T.atas]<<"Masuk ke stack";}
	else 
		cout <<"Tumpukan penuh";
}

void hapus()
{
	if(kosong()==0)
	{
		cout <<"Data teratas sudah terambil";
		T.atas--;
	}
	else
	cout <<"Data kosong";
}

void tampil()
{
	cout << "Isi tumpukan" << endl;
	if(kosong()==0)
	{
		for(int i=T.atas; i>=0; i++)
		{
			cout <<T.data[i]<<endl;
		}
	}
	else 
	cout <<"Tumpukan kosong";
}

void bersih()
{
T.atas=-1;
cout <<"Tumpukan kosong!";
}

int main()
{
	int pil;
	char data;
	awal ();
	do
{

system("CLS");
cout << "Menu Stack"<< endl;
cout << "1.Push\n2.Pop\n3.Tampil\n4.Bersihkan\n5.Keluar\nMasukkan pilihan :";
cin >> pil;
switch(pil)
{
	case 1 : cout <<"Masukkan data = " ; cin >> data;
			input(data);
			break;
	case 2 : hapus();
			break;
	case 3 : tampil();
			break;
	case 4 : bersih();
			break;
	case 5 : cout <<"Terimakasih, tekan enter untuk keluar";
}

getch(); }
while(pil!=5); }
