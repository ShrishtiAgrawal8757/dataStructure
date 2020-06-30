#include<iostream>
using namespace std;

void sub_array(int a[],int n)
{
    int count=0,j,k,m;
    for(int i=0;i<n;i++)
    {
          m=0;
       for( j=0;j<n-i;j++)
       {
           k=0;
           
           while(k<=i)
           {
               cout<<a[m];
               k++;
               m++; 
           }
           m=m-i;
           cout<<"\n";
       }
    }
}          
           
         
 main(){
    int i,n;
    int a[1000];

    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter element  of array";

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sub_array(a,n);
    
    return 0;

}