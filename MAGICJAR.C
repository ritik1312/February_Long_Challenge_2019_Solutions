// Chef and Magical Jars

#include <stdio.h>
int main()
{
    int t,i,j,n;
    long long int sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        long int a[n];
        sum=0;
        for(j=0;j<n;j++)
        {
            scanf("%ld",&a[j]);
            sum+=a[j];
        }
        printf("%lld\n",sum-n+1);
    }
}