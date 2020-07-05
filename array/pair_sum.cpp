

#include<iostream>
using namespace std;
void pair_sum(int a[],int n,int key)
{ 
    int i,j,s,count=0;
    i=0,j=n-1;
    while(i<=j)
    {
        s=a[i]+a[j];
        if(s==key)
        {
            cout<<a[i]<<","<<a[j]<<endl;
            i++,j--;
            count++;
        }
        else if(s>key)
         j--;
         else
           i++;
    }
    if(count==0)
     cout<<"key can't found";
}

        
           
         
 main(){
    int i,n,key;
    int a[1000];

    cout<<"Enter size of array";
    cin>>n;
    cout<<"Enter element  of array";

    for ( i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cout<<"enter key";
    cin>>key;
    pair_sum(a,n,key);
    
    return 0;

}