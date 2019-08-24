#include <stdio.h>
#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
	cout<<"enter the elements in the array";
	int n;
	int p,m,temp;
	cin>>n;
	cout<<"enter the elements \n";
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		m=a[i];
		
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<m)
			{
				p=j;
				m=a[j];
			}
		}
		temp=a[p];
		a[p]=a[i];
		a[i]=temp;
		
	}
	cout<<"Enter the value of k";
	int z;
	cin>>z;
	cout<<a[z-1];
	
	
	
	return 0;
}
