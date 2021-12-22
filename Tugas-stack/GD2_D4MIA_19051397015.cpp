#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char kata[35];
	int inputkata;
	int i;
	
	cout << "==STACK MENGEMBALIKAN KATA==" << endl;
	cout <<"Kata yang dimasukkan adalah: " << endl;
	cin >> kata;
	inputkata=strlen(kata);
	cout <<"Kata dibalik menjadi: ";
	for (i=inputkata;i>=1;i--)
	{
		char stack = kata[i-1];
		cout << stack;
	}
	getch();
}
