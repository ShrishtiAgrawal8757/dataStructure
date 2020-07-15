#include<iostream>
using namespace std;

int magical_park(char a[][100],int m,int n, int k,int s)
{
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
        if(s<k)
        {
            cout<<"No";
            return -1;
        } 
        char c=a[i][j];
            if(j!=0)
             {
                 s=s-1;
             } 
            if(c=='.')
             {
                 s-=2;
             }
             if(c=='*')
             {
                 s+=5;
             }
             if(c=='#')
             {
                 break;
             }
             
        }
    }
    
    if(s>=k)
     cout<<"Yes"<<s;
     
     
}


int main()
{
    int m,n,k,s,a;
    char park[100][100];
    cout<<"Enter m n k s";
    cin>>m>>n>>k>>s;
    cout<<"Enter Input";
    for(int i=0;i<m;i++)
{
    for(int j=0;j<n;j++)
    {
        cin>>park[i][j];
    }
}
    a= magical_park(park,m,n,k,s);
  return 0;
} 