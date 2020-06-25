#include<iostream>
using namespace std;
void Selection_Sort(int a[],int n)
{
    int i,j,t=0;
    for(i=0;i<n-1;i++)
    {
        int s=i;
        
        for(j=i;j<n;j++)
        {
            if(a[j]<a[s])
            {
                s=j;
                
            }
        }
          t=a[i];
     swap(a[i],a[s]);

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

