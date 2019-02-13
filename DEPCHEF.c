// Deputy Chef

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    bool f,live[10001];
    cin>>t;
    for(int i=0;i<t;i++)
    {
        for(int j=1;j<10001;j++)
        {
            live[j]=0;
        }
        cin>>n;
        int a[n],d[n];
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            cin>>d[j];
        for(int j=0;j<n;j++)
        {
            if((a[(j-1+n)%n]+a[(j+1)%n])<d[j])
                live[d[j]]=1;
        }
        sort(d,d+n,greater<int>());
        f=0;
        for(int j=0;j<n;j++)
        {
            if(live[d[j]])
            {
                cout<<d[j]<<endl;
                f=1;break;
            }
        }
        if(f==0)
            cout<<-1<<endl;
    }
    return 0;
}