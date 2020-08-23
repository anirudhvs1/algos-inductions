#include <iostream>

using namespace std;

int main()
{
    long n;
    long q;
    long l, r, v;
    cin>>n>>q;

    long a[n+1];
    for(long i=1; i<=n; i++)
    {
        a[i]=i;
    }

    while(q--)
    {
        cin>>l>>r>>v;
        for(long j=l; j<=r; j++)
        {
            a[j]+=v;
        }
    }

    long max=-1;

    for(long i=1; i<=n; i++)
    {
        max= (a[i]>max) ? a[i] : max;
    }

    cout<<max;


    return 0;
}
