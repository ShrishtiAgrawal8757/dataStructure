#include<iostream>
using namespace std;
int main()
{
    int i,j,n,m,k;
    int a[100][100];
 
    cout<<"Enter Key";
    cin>>k;
    cout<<"Enter row";
    cin>>n;
    cout<<"Enter element";

     
    for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
         {
             cin>>a[i][j];
         }
     }
    cout<<"Element is";
      for(i=0;i<n;i++)
     {
         for(j=0;j<n;j++)
          cout<<a[i][j]<<" ";
        cout<<"\n";  
     }
        j=n-1;
         i=0;
     
         while(i<n  && j>=0)
         {
             m=a[i][j];
             if(m==k)
             {
                 cout<<"found"<<i<<j;
                 break;
             }
             else{
                 if(m<k)
                 {
                     i++;
                 }
                 else{
                     j--;
                 }
             }
         
     }
     if(m!=k){
         cout<<"not found";
     }
     return 0;
}











