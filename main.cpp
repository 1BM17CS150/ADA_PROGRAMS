#include <stdio.h>
#include<iostream>
using namespace std;
int sq(int n)
{
	int f=0,l=n,m,p;
	while(f<=l)
	{
		m=(f+l)/2;
		if((m*m)==n)
		   {
			   return m;
			
		   }
		 else if((m*m)<n)
		   {
			   f=m+1;
			   p=m;
			   
		   }
		   else
		   l=m-1;
        }
		   return p;
}
int main(int argc, char **argv)
{
	cout<<"Enter the no n";
	int n;
	cin>>n;
	int ans=sq(n);
	cout<<ans;		   
	return 0;
}
