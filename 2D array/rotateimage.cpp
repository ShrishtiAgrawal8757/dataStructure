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
      for(i=0;i<m;i++)
      {
          int t=0,j=n-1;
          while(t<j )
          {
              swap(a[i][t],a[i][j]);
              t++;
              j--;
          }
      }

     
     
      for(i=0;i<m;i++)
     {
         for(j=i;j<n;j++)
         {
             if(a[i]!=a[j])
             {
            
                 int temp=a[i][j];
                 a[i][j]=a[j][i];
                 a[j][i]=temp;
                 
             } 
         }
     }
        cout<<"Output:";
        for(i=0;i<m;i++)
          {
         for(j=0;j<n;j++)
          cout<<a[i][j]<<" ";
        cout<<"\n";  
} 
 }