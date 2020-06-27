#include<iostream>
using namespace std;
void insertion_Sort(int a[],int n)
{
    int i,j,e;
    for(i=1;i<=n-1;i++)
    {
        
       e=a[i];
       j=i-1; 
       while(a[j]>e&&j>=0)
       {
           a[j+1]=a[j];
           
           j--;
       }
       
     a[j+1]=e;

    }
     for(i=0;i<n;i++)
     {
         cout<<"\n"<<a[i];
     }
}
 

int main(){
    int i,n;
    int a[1000];

    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter element  of array";

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    insertion_Sort(a,n);
    
    return 0;

}

