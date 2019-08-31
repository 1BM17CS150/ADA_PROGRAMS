#include <bits/stdc++.h> 
using namespace std;  
  int c=0;
int merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    
    int L[n1], R[n2]; 
  
   
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
   
    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) 
    { 
		c++;
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
	return c;
}
 
  

int mSort(int arr[], int l, int r) 
{ 
	int x=0;
    if (l < r) 
    { 
        
        int m = l+(r-l)/2; 
  
        
        mSort(arr, l, m); 
        mSort(arr, m+1, r); 
  
         x=merge(arr, l, m, r); 
    } 
	return x;
	
} 
  
int bubblesort(int arr[],int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			count++;			
			if(arr[i]>arr[j])
			{
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				
			}	
		}
	}
	return count;
} 
int selectionsort(int arr[],int n)
{
	int count=0,min,i,j;
	for(int i=0;i<n;i++)
	{
		min=i;		
		for(int j=i+1;j<n;j++)
		{
			count++;			
			if(arr[min]>arr[j])
			{
				min=j;
			}	
		}
		if(min!=arr[i])
			{
				int t=arr[i];
				arr[i]=arr[j];
				arr[j]=t;
				
			}	
	}
	return count;
} 

int main() 
{ 
     int n,i,t;
cout<<"enter the size";
cin>>n;
cout<<"enter the elements";
int arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
  	
    int x=mSort(arr, 0, n - 1); 
    int y=bubblesort(arr,n);
    int z=selectionsort(arr,n);
  
    cout<<"mergesort:"<<x;
cout<<endl;
cout<<"bubblesort:"<<y;
cout<<endl;
cout<<"selectionsort:"<<z;
cout<<endl;
    return 0; 
} 
