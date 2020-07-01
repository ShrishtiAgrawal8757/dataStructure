

#include<iostream>
using namespace std;

void sub_array(int a[],int n)
{
    int i,j,k,sum=0,t,start=0,end=0;
    t=a[0];
    int csum[n];
    
    for(int i=0;i<n;i++)
    {
      csum[i]=csum[i-1]+a[i]; 
    } 
       for( j=0;j<n;j++)
       {
           sum=0;
            for( k=j;k<n;k++)
            {
                sum=csum[k]-csum[j-1];
                if(sum>t)
                {
                    t=sum;
                }
                
                
            }
            
           
       }
    
    cout<<"largest is:"<<t<<endl;
    
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