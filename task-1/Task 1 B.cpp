#include <iostream>
#include <string.h>

using namespace std;

void degreeofsymmetry(string s, long len, long n=0)
{
    if(len==1)
            cout<<n;
    else
    {
        string s1=s.substr(0,len/2);
        string s2=s.substr(len/2,len/2);
        if(s1==s2)
        {
            degreeofsymmetry(s1,len/2,n+1);
        }

        else
        {
            cout<<n;
        }

    }
}


int main()
{
    long len;
    string s;
    cin>>len;
    cin>>s;
    degreeofsymmetry(s,len);
    return 0;
}
