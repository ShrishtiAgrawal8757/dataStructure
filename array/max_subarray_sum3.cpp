

#include<iostream>
using namespace std;

void sub_array(int a[],int n)
{
    int i,cs=0,ms=0;
    
    for(int i=0;i<n;i++)
    {
       cs+=a[i];
        if(cs>0)
        {
        
             if(cs>ms)
                ms=cs;
                
                
                
            }
            else
                if(cs<0) 
                  cs=0;
                  
                  
        } 
                
           
            
           
       
    
     
    cout<<"ms"<<ms;
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