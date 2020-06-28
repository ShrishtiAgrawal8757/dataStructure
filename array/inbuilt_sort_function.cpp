#include<iostream>
using namespace std;
#include<algorithm>
bool compare(int a,int b )
{
    return a>b;
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
  
    sort(a,a+n,compare);
    for ( i = 0; i < n; i++)
     {
         cout<<a[i];

     }
    
    return 0;

}

