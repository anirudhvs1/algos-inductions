#include <bits/stdc++.h>
using namespace std;

int main()
{
    long n;
    cin>>n;
    bool p[n+1];
    memset(p,true,sizeof(p));

    for(long i=2; i*i<=n; i++)
    {
        if(p[i]==true)
        for(long j=i*i; j<=n; j+=i)
            p[j]=false;
    }

    long count=0;
    for(long i=2; i<=n; i++)
    {
        if(p[i]==true)
            count++;
    }

    cout<<count*(count+1)/2;

    return 0;
}
