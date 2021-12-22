#include<iostream>
using namespace std;

int main()
{
	int i, j, max, x;
	max = 6;
	int a[] = {7, 19, 4, 8, 20, 1};
	cout <<	"Latihan 1" << endl;
	cout << "Insertion Sort" << endl;
	for(i=0; i<max; i++)
	{
		cout << a[i] << ",";
	}
	for (i=1; i<=max-1; i++)
	{
		x = a[i];
		j = i-1;
		while((x<a[j])&&(j>=0))
		{
			a[j+1] = a[j];
			j=j-1;
		}
	a[j+1] = x;
	}
	cout << endl;
	for (i=0; i<max; i++)
	{
		cout << a[i] << ",";
	}
	
}
