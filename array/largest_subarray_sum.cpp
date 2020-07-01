
#include<iostream>
using namespace std;

void sub_array(int a[],int n)
{
    int i,j,k,sum=0,t,start=0,end=0;
    t=a[0];
    for(int i=0;i<n;i++)
    {
        
       for( j=i;j<n;j++)
       {
           sum=0;
            for( k=i;k<=j;k++)
            {
                sum=sum+a[k];
                
                
            }
            if(sum>t)
                {
                    t=sum;
                    start=i;
                    end=j;
                }
           
       }
    }
    cout<<"largest is:"<<t<<endl;
    for(int m=start;m<=end;m++)
     cout<<"  "<<a[m];
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