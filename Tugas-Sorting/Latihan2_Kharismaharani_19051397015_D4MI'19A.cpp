#include<iostream>
using namespace std;

int main()
{
	int i, j, k, max, temp;
	int a[6] = {7, 19, 4, 8, 20, 1};
	max = 6;
	cout << "Latihan 2" << endl;
	cout << "Selection Sort" << endl;
	for(i=0; i<max; i++)
	{
		cout << a[i] << ",";
	}
	for(i=0; i<max; i++)
	{
		k = i;
		for(j=i+1; j<max; j++)
		{
			if(a[k]>a[j])
			{
				k=j;	
			}
			
		}
	temp = a[k];
	a[k]=a[i];
	a[i]=temp;
	}
	cout << endl;
	for(i=0; i<max; i++)
	{
		cout << a[i] << ",";
	}
}
