#include <stdio.h>

long int gcd(long int a,long int b)
{
    if(b%a==0)
        return a;
    else
        return gcd(b%a,a);
}

int main()
{
    int t,i;
    long int a,b;
    long long int l,n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%lld%ld%ld%lld",&n,&a,&b,&k);
        l=(a*b)/gcd(a,b);
        if(((n/a)+(n/b)-2*(n/l))>=k)
            printf("Win\n");
        else
            printf("Lose\n");
    }
	return 0;
}