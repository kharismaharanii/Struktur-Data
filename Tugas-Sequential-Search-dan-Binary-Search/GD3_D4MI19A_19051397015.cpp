#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	const int Ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int tar, i;
	
	for (int i=0; i<10; i++)
	{
		cout << Ar[i] << " ";
	}
	cout << endl;
	cout << "Masukkan data yang akan dicari : ";
	cin >> tar;
	
	int awal=0, akhir=10, tengah;
	while (awal <= akhir)
	{
		tengah = (awal + akhir)/2;
		if (tar > Ar[tengah])
		{
			awal = tengah + 1;
		}
		else if (tar < Ar[tengah])
		{
			akhir = tengah-1;
		}
		else
		{
			awal = akhir + 1;
		}
	}
	if (tar == Ar[tengah])
	{
		cout << "Data ditemukan pada indeks ke-" << tengah+1 << endl;
	}
	else
	{
		cout << "Data tidak ditemukan"<< endl;
	}
getch();
}
