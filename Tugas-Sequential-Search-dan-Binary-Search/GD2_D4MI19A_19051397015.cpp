#include<stdlib.h>
#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

int pencarian(char st[], char m)
{
	int i, posisi, panjang;
	
	i=0;
	posisi = -1;
	panjang = strlen(st);
	while ((i<panjang-1)&&posisi ==-1)
	{
		if(st[i]== m)
		{
			posisi = i;
			i++;
		}
	}
	return posisi;
}

int main()
{
	printf("Pencarian dengan Binary Search\n");
	char kalimat[]="Kharismaharani Aisyah Putri";
	char dicari='K';
	printf("Posisi %c dalam string %s berada pada indeks ke-[%d]", dicari, kalimat, pencarian(kalimat, dicari));
	printf("\n");
	system("PAUSE");
	return 0;
}
