#include <iostream>
using namespace std;


string findnext(string binary, long n)
{
        long i;
        for(i=n-1;i>0;i--)
        {
            if(binary[i]=='0')
                break;
            else
                binary[i]='0';
        }
        binary[i]='1';
        return binary;
}

string findprev(string binary, long n)
{
        long i;
        for(i=n-1;i>0;i--)
        {
            if(binary[i]=='1')
                break;
            else
                binary[i]='1';
        }
        binary[i]='0';
        return binary;
}


int main()
{
    long n,countofone=0;
    cin>>n;
    string binary;
    cin>>binary;

    for(long i=0; i<n; i++)
    {
        if(binary[i]=='1')
            countofone++;
    }
    if(countofone==1 || countofone==n)
    {
        cout<<-1;
    }
    else
    {
        string next, prev;
        next=findnext(binary,n);
        prev=findprev(binary,n);
        cout<<prev<<" "<<next;
    }

    return 0;
}
