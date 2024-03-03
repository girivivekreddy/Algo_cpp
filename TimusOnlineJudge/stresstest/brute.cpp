#include <iostream>
#include <stdio.h>

int main()
{
    long n,k,t;
    scanf("%ld%ld",&n,&k);
    t=2*(n/k)+(n%k!=0)+((n%k>k/2.0)||(n<k));
    printf("%ld\n",t);
    return 0;
}