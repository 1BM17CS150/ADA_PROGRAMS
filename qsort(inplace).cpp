#include<iostream>
using namespace std;

int partition(int a[],int low,int high)
{
	int p=a[low];int i=low+1;int j=high;int t;
	while(1)
	{
		while(a[i]<=p && i<=high)
			i=i+1;
		while(a[j]>p&&j>=low)
			j=j-1;
		if(i<j)
		{
			t=a[i];
		    a[i]=a[j];
		    a[j]=t;	
		}
		else
		{
			a[low]=a[j];
			a[j]=p;
			return j;
		}
		

		
	}

	
				
}
int quicksort(int a[],int m,int n)
{
	int s;	
	if(m<n)
	{
		s=partition(a,m,n);
		quicksort(a,m,s-1);
		quicksort(a,s+1,n);
	} 
 
	return 0;
} 
  


int main()
{
	int n,i;
	cout<<"Enter the size:";
	cin>>n;
	int a[n];
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	quicksort(a,0,n-1);
	cout<<endl<<"Array after sorting is:";
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
	return 0;
}