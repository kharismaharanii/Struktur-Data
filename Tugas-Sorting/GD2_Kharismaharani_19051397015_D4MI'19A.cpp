#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

int data[10], data2[10];
int n;
void tukar (int a, int b)
{
	int t;
	t = data[b];
	data[b] = data[a];
	data[a] = t;
}

void bubble_sort()
{
	for(int i=1; i<n; i++)
	{
		for(int j=n-1; j>=i; j--)
		{
			if(data[j]<data[j-1])
			{
				tukar(j, j-1);
			}
		}
	}
	printf("Bubble sort selesai!\n");
}

void selection_sort()
{
	int pos, i, j;
	for(i=0; i<n-1; i++)
	{
		pos = i;
		for(j=i+1; j<n; j++)
		{
			if(data[j]<data[pos])
			{
				pos = j;
			}
		}
		if(pos!=i)
		{
		tukar(pos, i);
		}
		
	}
}

void insertion_sort()
{
	int temp, i, j;
	for(i=1; i<n; i++)
	{
		temp = data[i];
		j = i-1;
		while(data[j]>temp && j>=0)
		{
			data[j+1] = data[j];
			j--;
		}
		data[j+1] = temp;
	}
	printf("Insertion sort selesai!\n");
}

void input()
{
	printf("Masukkan jumlah data= ");
	scanf("%d",&n);
	for(int i=0; i<n; i++)
	{
		printf("Masukkan data ke-%d= ",(i+1));
		scanf("%d",&data[i]);
		data2[i]=data[i];
	}
}

void acaklagi()
{
	for(int i=0; i<n; i++)
	{
		data[i]=data2[i];
	}
	printf("Data sudah teracak\n");
}

void tampil()
{
	printf("Data : ");
	for(int i=0; i<n; i++)
	{
		printf("%d",data[i]);
	}
}

int main()
{
	int pil;
	do{
	cout << "\n      SORTING       " << endl;
	cout << "======================" << endl;
	cout << "1. Input" << endl;
	cout << "2. Bubble Sort" << endl;
	cout << "3. Selection Sort" << endl;
	cout << "4. Tampilkan data" << endl;
	cout << "5. Acak" << endl;
	cout << "0. Exit" << endl;
	cout <<"Masukkan pilihan anda="; 
	cin >> pil;
	if(pil==1)
	{
		input();
	}
	else if(pil==2)
	{
		bubble_sort();
	}
	else if(pil==3)
	{
		selection_sort();
	}
	else if(pil==4)
	{
		tampil();
	}
	else if(pil==5)
	{
		acaklagi();
	}
	else if(pil==0)
	{
		system("PAUSE");
	}
}while(pil<=5);
cout << "Periksa kembali pilihan anda!";
}

