#include <stdio.h>
int main ()
{ long int bin=0;
       int rem, i=1,step=1;
       int n;
	   printf ("enter input :");
       scanf ("%d",&n);
       printf("%d in decimal=%lld in binary\n",n);
       while (n!=0){
       	rem=n%2;
       	printf ("step %d: %d/2, rem=%d, quo=%d\n",step++,n,rem,n/2);
       	n=n/2;
       	bin=bin+rem*1;
       	i=i*10;
       }
       
	   
}
