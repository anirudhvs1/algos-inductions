#include <bits/stdc++.h>
using namespace std;

long strength(multiset <long> s, long n)
{
    long length=s.size();

    cout<<endl<<"Given Set: "<<endl;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    if(length>n)
    {
        auto beg=s.begin();
        auto sec=next(beg);
        long temp=*beg+*sec;

        s.insert(temp);
        s.erase(beg);
        s.erase(sec);
        cout<<"Popped and changed: "<<endl;
    for(auto it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    }

    if(length-1>n)
    {
        return strength(s,n);
    }

    else
    {

        return *s.begin();
    }
}


int main()
{
    long n, m;
    cin>>n>>m;
    multiset <long> s;
    long temp;
    for(long i=0; i<m; i++)
    {
        cin>>temp;
        s.insert(temp);
    }

    cout<<strength(s, n);

    return 0;
}
