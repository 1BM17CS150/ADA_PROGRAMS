#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number";
	cin>>n;
	//int sqr(int a)
	
	int l=n;
	int f=0;

	int p;

	while(f<=l)
	{
		int m=(f+l)/2;
		if(m*m==n)
		{	
			cout<<m<<endl;
			exit(0);
			
		}
		else if((m*m)<n)
		{
			f=m+1;
			p=m;
		}
		else
		{
			l=m-1;
		}
		
	}
	cout<<p;
	
}