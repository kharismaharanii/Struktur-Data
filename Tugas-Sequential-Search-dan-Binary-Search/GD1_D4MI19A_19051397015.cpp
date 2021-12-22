#include<stdlib.h>
#include<stdio.h>
#include<iostream>
using namespace std;

int pencarian()
{
	int data[4], n, k;
	int posisi, i, ketemu;
	if (n<=0)
		posisi = -1;
	else
	{
		ketemu = 0;
		i = 1;
		while((i<=n-1)&&(!ketemu))
			if(data[i]==k)
			{
				posisi = i;
				ketemu = 1;
			}
			else
				i++;
	if(!ketemu)
		posisi = -1;
	}	
	return posisi;
}
int main()
{
	int data[5]={56, 98, 25, 100, 72};
	int dicari = 100;
	cout << "Pencarian dengan Squential" << endl;
	cout << "Data : 56, 98, 25, 100, 72" << endl;
	cout << "Posisi " << dicari << " berada pada indeks ke: " << pencarian() << endl;
	system("PAUSE");
	return 0;
}
