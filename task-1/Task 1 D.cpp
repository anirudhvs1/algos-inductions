#include <iostream>

using namespace std;

int main()
{
    long n, r, x, y;
    cin>>n>>r>>x>>y;
    long change=0;
    bool c[n];
    bool s;
    for(long i=0; i<n;i++)
    {
        cin>>c[i];
    }
    for(long i=0;i<n;i++)
    {
        cin>>s;
        if(c[i]&&s) change+=x;
        else if(c[i]==1 && s==0) change-=y;
    }

    if(change>0) cout<<"promoted";
    else if (change<0) cout<<"demoted";
    else cout<<"no change";

    return 0;
}
