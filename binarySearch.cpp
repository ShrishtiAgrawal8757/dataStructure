#include<iostream>
using namespace std;
int binary_search(int e,int s,int k,int a[])
{
    int m;
    while(s<=e)
    {
        m=(e+s)/2;
        if(a[m]==k)
        {
            // cout<<"Found at position"<<m;
            return m;
        
        }
        else if(k<a[m])
        {
            e=m-1;
            
        }
        else
        {
            s=m+1;
            
        }


    }
    return -1;
}


int main(){
    int s=0,e,key,n;
    int a[1000];

    cout<<"Enter size of array";
    cin>>n;
    e=n-1;

    for (int i = 0; i < n; ++i)
    {
        cin>>a[i];
    }
    cout<<"Enter key";
    cin>>key;

    cout<<binary_search(e,s,key,a);
    
    return 0;

}

