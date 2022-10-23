/*Naiv method
#include<stdio.h>
int check_prime(int n)
{
    int i;
    if(n==1)
    return 0;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(check_prime(n)==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);
}*/
/* method -2;
#include<stdio.h>
int check_prime(int n)
{
    int i;
    if(n==1)
    return 0;
    for(i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(check_prime(n)==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);
}*/
//method-3 best method
#include<stdio.h>
int check_prime(int n)
{
    int i;
    if(n==1)
    return 0;
    if(n==2 || n==3)
    return 1;
    if(n%2==0 || n%3==0)
    return 0;
    for(i=5;i*i<=n;i=i+6)
    {
        if(n%i==0 || n%(i+2)==0)
        return 0;
        else
        return 1;
    }
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    if(check_prime(n)==0)
    printf("%d is not a prime number",n);
    else
    printf("%d is a prime number",n);
}

