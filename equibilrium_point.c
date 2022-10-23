#include<stdio.h>
int equi_point(int a[],int n)
{
    int i,j,k,l_sum,r_sum;
    for(i=0;i<n;i++)
    {
        l_sum=0,r_sum=0;
        for(j=0;j<i;j++)
        l_sum+=a[j];
       for(k=i+1;k<n;k++)
        r_sum+=a[k];
        if(l_sum==r_sum)
        return 1;
    }
    return 0;
}
int main()
{
    int a[100],i,t;
    int n;
    printf("enter size of array:");
    scanf("%d",&n);

    printf("enter the elment of the array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
     t=equi_point(a,n);
     if(t==0)
     printf("no");
     else printf("yes");
}