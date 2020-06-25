#include<iostream>
using namespace std;
void Selection_Sort(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n-1;i++)
    {
        int s=a[i];
        int l=0;
        for(j=i;j<n;j++)
        {
            if(a[j]<=s)
            {
                s=a[j];
                l=j;
            }
        }
          t=a[i];
          a[i]=a[l];
          a[l]=t;

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
    Selection_Sort(a,n);
    
    return 0;

}

