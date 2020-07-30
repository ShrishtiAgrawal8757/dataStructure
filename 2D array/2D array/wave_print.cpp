#include<iostream>
using namespace std;
int main()
{
    int i,j,m,n,k=0,t;
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
     for(int p=0;p<n;p++)
     {
     if(p%2==0)
     {
         
             for(i=1;i<=m;i++){
             cout<<a[i-1][p]<<" ";
         }
         
     }
     
     else 
       for(j=m-1;j>=0;j--)
       {
           cout<<a[j][p]<<" ";
       }
    
     }    
     return 0;
}