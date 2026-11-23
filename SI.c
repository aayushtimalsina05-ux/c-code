#include<stdio.h>
void main()
{
    int p, t, r;
    printf("enter principal amount:");
    scanf("%d",&p);
    printf("enter time period:");
    scanf("%d",&t);
    printf("enter rate of interest:");
    scanf("%d",&r);
    printf("\n Simple Interest is %d",(p*t*r)/100);

}


