#include<iostream>
using namespace std;

int main()
{
	int ch, n, temp, j, i, k;
	n = 6;
	int x[] ={7, 19, 4, 8, 20, 1};
	ch = true;
	cout << "Latihan 3" << endl;
	for (int i=0; i<n; i++)
	{
		cout << x[i] << ",";
	}
	cout << "\n\nInsertion Sort : ";
		for (i=1; i<=n-1; i++)
		{
			temp = x[i];
			j = i-1;
			while((temp<x[j])&&(j>=0))
			{
				x[j+1] = x[j];
				j=j-1;
			}
		x[j+1] = temp;
		}
		cout << endl;
		for (i=0; i<n; i++)
		{
			cout << x[i] << ",";
		}
	cout << "\n\nSelection Sort :";
		for(i=0; i<n; i++)
		{
			k = i;
			for(j=i+1; j<n; j++)
			{
				if(x[k]>x[j])
				{
					k=j;	
				}
				
			}
		temp = x[k];
		x[k]=x[i];
		x[i]=temp;
		}
		cout << endl;
		for(i=0; i<n; i++)
		{
			cout << x[i] << ",";
		}
	cout << "\n\nBubble Sort : ";
		for (i=0; i<n-2 &&ch; i++)
		{
			ch=false;
			for(j=n-1; j>i; j--)
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
		for (i=0; i<n; i++)
		{
			cout << x[i] << ",";
		}
}
