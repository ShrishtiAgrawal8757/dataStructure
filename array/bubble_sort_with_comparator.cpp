#include<iostream>
using namespace std;
bool compare(int a,int b)
{
    return a>b;
}
void Bubble_Sort(int a[],int n,bool (&comp)(int a,int b))
{
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        
        
        for(j=0;j<n-i;j++)
        {
            if(comp(a[j],a[j+1]))
            {
                swap(a[j],a[j+1]);
                
            }
        }
     

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
    Bubble_Sort(a,n,compare);
    
    return 0;

}

