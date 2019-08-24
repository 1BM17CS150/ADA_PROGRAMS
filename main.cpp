#include <stdio.h>
#include<iostream>
using namespace std;
int main(int argc, char **argv)
{
	cout<<"enter the elements in the array";
	int n;
	int p,m,temp;
	cin>>n;
	int a[n];
	cout<<"enter the elements \n";
	
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
		       temp=a[i];
		       a[i]=a[j];
			   a[j]=temp;
			}
		}
	}
	/*for(int i=0;i<n;i++)
	{
		cout<<"  "<<a[i]<<" ";
	}*/
	cout<<"Enter the value of k";
	int z;
	cin>>z;
	cout<<a[z-1];
	return 0;
}
