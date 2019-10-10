#include <iostream>
using namespace std;
int q[20],f=0,r=-1;
int a[60][60],visited[60],n,s;;

void BFS(int k)
{
    int w;
    visited[k]=1;
    r++;
    q[r]=k;
    while(f<=r)
    {
        w=q[f];
        f++;
        cout<<w;
        for(int i=0;i<n;i++)
        {
         if(a[w][i]==1 && visited[i]==0)
         {
             r++;
             q[r]=i;
             visited[i]=1;

         }
        }
    }

}

int main()
{

    cout << "Enter the number of vertices in the graph : ";
    cin>>n;
    cout<<"Enter the adjacency matrix : "<<endl;
    for(int i=0;i<n;i++)
    {

        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++)
        visited[i]=0;
    cout<<" source vertex is : ";
    cin>>s;
    BFS(s);
    return 0;
}
