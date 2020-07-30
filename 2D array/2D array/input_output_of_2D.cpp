#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n;
    int a[100][100];
    cout<<"Enter row and column";
    cin>>m>>n;
    cout<<"Enter element";
    for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>a[i][j];
         }
     }
    cout<<"Element is";
      for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
          cout<<a[i][j]<<" ";
        cout<<"\n";  
     }
     return 0;
}