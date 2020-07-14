#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,sc,sr,ec,er;
    int a[100][100];
    cout<<"Enter row and column";
    cin>>m>>n;
    cout<<"Enter element";
     sr=0,ec=n-1,er=m-1,sc=0;
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
    while(sr<=er && sc<=ec)
     {
         for(i=sc;i<=ec;i++)
         {
             cout<<a[sr][i]<<" ";
         }
         sr++;
         for(i=sr;i<=er;i++)
         {
             cout<<a[i][ec]<<" ";
         }
         ec--;
         if(sr<er){
         for(i=ec;i>=0;i--)
         {
             cout<<a[er][i]<<" ";
         }
         er--;
         }
          if(sc<ec){
         for(i=er;i>=sr;i--)
          cout<<a[i][sc]<<" ";
          sc++;
          }
     }
     return 0;
} 