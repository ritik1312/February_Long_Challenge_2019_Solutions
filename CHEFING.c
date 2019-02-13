//Chef and Secret Ingredients

#include <stdio.h>
#include <stdbool.h>

int main()
{
    char s[201];
    int t,i,j,k,n,c,f;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n);
        bool a[n][26];
        for(j=0;j<n;j++)
        {
            for(k=0;k<26;k++)
            {
                a[j][k]=false;
            }
        }
        for(j=0;j<n;j++)
        {
            scanf("%s",s);
            for(k=0;s[k]!='\0';k++)
            {
                a[j][(int)s[k]-97]=true;
            }
        }
        c=0;
        for(k=0;k<26;k++)
        {
            f=0;
            for(j=0;j<n;j++)
            {
                if(!a[j][k])
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
                c++;
        }
        printf("%d\n",c);
    }
	return 0;
}