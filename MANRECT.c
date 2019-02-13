// Manhattan Rectangle

#include <stdio.h>

#define m 1000000007

long int gcdExtended(long int a,long int b,long int *x,long int *y)
{
    if (!a) 
    {
        *x = 0;*y = 1; 
        return b; 
    } 
    long int x1,y1;
    long int g=gcdExtended(b%a,a,&x1,&y1); 
    *x=y1-(b/a)*x1; 
    *y=x1; 
    return g;
}

long int modDiv(long int a,long int b)
{
    long int x,y;
    long int g=gcdExtended(b,m,&x,&y);
    long int inv=(x%m+m)%m;
    return ((a%m)*inv)%m;
}

long int modpow(long int a,long int b)
{
    int res=1;
    a=a%m;
    
    while(b>0)
    {
        if(b%2==1)
            res=(res*a)%m;
        a=(a*a)%m;
        b=b/2;
    }
    return res;
}

int main()
{
    int t,i;
    long int tp,n,k,moves,b;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%ld%ld%ld",&n,&k,&moves);
        
        if(moves%2==0)
            tp=((1-modpow(modDiv(n-1,n),moves/2)+m)%m+(modpow(modDiv(n-1,n),moves/2)*modDiv(1,n+k))%m)%m;
        else
            tp=(1-modpow(modDiv(n-1,n),(moves+1)/2)+m)%m;
        printf("%ld\n",tp);
    }
    return 0;
}