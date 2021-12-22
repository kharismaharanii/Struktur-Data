#include<iostream>
using namespace std;

int main()
{
	char ch, temp;
	int n;
	char x[]={'f','z','h','t','u','q'};
	n = 6;
	ch = true;
	cout <<"Unguided" << endl;
	for(int i=0; i<n; i++)
	{
		cout << x[i] << ",";
	}
	for(int i=0; i<n-2 && ch; i++)
	{
		ch = false;
		for(int j=n-1; j>i; j--)
		{
			if(x[j]<x[j-1])
			{
				temp = x[j];
				x[j] = x[j-1];
				x[j-1] = temp;
				ch = true;
			}
		}
	}
	cout << endl;
	for(int i=0; i<n; i++)
	{
		cout << x[i] << ",";
	}
}
