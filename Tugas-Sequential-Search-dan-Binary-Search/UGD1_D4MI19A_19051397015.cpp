#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
	int batas;
	int cari, ketemu=0;
	int a;
	int A[100];
	
	cout << "PENCARIAN ANGKA" << endl;
	cout << "Masukkan banyak angka = ";
	cin >> batas;
	if (batas >= 4)
	{
		for(int a=1; a<=batas; a++)
		{
			cout <<"Masukkan angka ke-" << a << " = " ;
			cin >> A[a];
		}
		cout << "Masukkan angka yang dicari = " ;
		cin >> cari;
		for(a=1; a<=batas; a++)
		{
			if (A[a]==cari)
			{
				ketemu = 1;
				cout << "Data ditemukan pada indeks ke-" << a;
			}
		}
		if(ketemu==0)
		{
			cout << "Data tidak ditemukan";
		}
	}
	else
	{
		cout << "Masukkan minimal 4 angka!" << endl << endl;
		main();
	}
}
