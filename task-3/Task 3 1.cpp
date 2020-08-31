#include <iostream>
#include <string>
using namespace std;

int main()
{
    char zero='0';
    string s;
    cin>>s;
    long sumofdig=0;
    for(long i=0; i<s.length();i++)
    {
        sumofdig+=(int)s[i] - int(zero);
    }

    if(sumofdig==0)
    {
        cout<<0;
    }

    else if(sumofdig%9==0)
    {
        cout<<9;
    }
    else if(sumofdig%9!=0)
    {
        cout<<sumofdig%9;
    }

    return 0;
}
