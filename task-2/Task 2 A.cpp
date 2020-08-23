#include <iostream>
#include <string>
using namespace std;

int main()
{
    int t;
    long n;
    string s;
    long counter;
    long lis,curlis;
    cin>>t;

    while(t--)
    {
        counter=0;
        lis=0;
        curlis=0;
        cin>>s;
        n=s.length();

        for(long i=0; i<n; i++)
        {
            if(s[i]=='<')
                counter++;
            else if(s[i]=='>')
                counter--;

            if(counter<0)
            {
                break;
            }

            curlis++;

            if(counter==0)
            {
                lis = (curlis>lis) ? curlis : lis;
                curlis=0;
            }

        }
        if(counter>0)
            cout<<0;
        else
            cout<<lis;
    }
    return 0;
}
