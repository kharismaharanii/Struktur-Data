#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	char kalimat[20], cari, ganti;
	int jum = strlen(kalimat);
	cout << "Masukkan sebuah kalimat : "; cin.getline(kalimat,20);
	cout << "Masukkan karakter yang dicari : "; cin >> cari;
	cout << "Karakter pengganti : "; cin >> ganti;
	for (int a=0; a<jum; a++)
	{
		if(kalimat[a]==cari)
		{
			kalimat[a]=ganti;
			cout << "Hasil replace adalah sebagai berikut : ";
			for (int a=0; a<=jum; a++)
			{
				cout << kalimat[a];
			}
			cout << endl;
			system("PAUSE");
		}
	}
}
