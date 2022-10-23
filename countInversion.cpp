#include<bits/stdc++.h>
using namespace std;
int count_inversion(int a[],int n) // inversion- a pair(a[i],a[j]) where i<j and a[i]>a[j]
{
    int c=0,i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            c++;
        }
    }
    return c;
}
int main()
{
   int n,t;
   cin>> n;
   int a[n];
   for(int i=0;i<n;i++)
   {
     cin>>a[i];
   }
    t=count_inversion(a,n);
    cout<<t;
   return 0;
}