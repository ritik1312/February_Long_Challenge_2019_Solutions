// Art of Balance

#include <stdio.h>
#include <math.h>

void sort(int f[])
{
    int a;
    for(int i=0;i<26;i++)
    {
        for(int j=i+1;j<26;j++)
        {
            if(f[j]>f[i])
            {
                a=f[i];
                f[i]=f[j];
                f[j]=a;
            }
        }
    }
}

long int getFactors(long int a[],long int size,long int n)
{
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
                a[size++]=i;
            else
            {
                a[size++]=i;
                a[size++]=n/i;
            }
        }
    }
    return size;
}

int main()
{
    int t,f[26],j;
    long int n,i,min,moves1,size;
    char s[1000001];
    scanf("%d",&t);
    while(t--)
    {
        for(i=0;i<26;i++)
            f[i]=0;
            
        scanf("%s",s);
        for(i=0;s[i]!='\0';i++)
        {
            f[(int)s[i]-65]++;
        }
        n=i;
        
        sort(f);
        
        long int a[n];
        size=getFactors(a,0,n);
        
        
        min=n;
        for(i=0;i<size;i++)
        {
            if((n/a[i])>26)
                continue;
            moves1=0;
            for(j=0;j<(n/a[i]);j++)
            {
                if(f[j]<a[i])
                    moves1+=a[i]-f[j];
            }

            
            if(moves1<min)
                min=moves1;
        }
        printf("%ld\n",min);
    }
    return 0;
}