#include <iostream>
#include <utility>
using namespace std;

const int seveneight=56, sevennine=63, seventen=70, sevensixteen=112, sevenfortythree=301;
const int eightnine=72, eightten=80, eightsixteen=128, eightfortythree=344;
const int nineten=90, ninesixteen=144, ninefortythree=387;
const int tensixteen=160, tenfortythree=430;
const int sixteenfortythree=688;

pair<int,int> getnum(int prod)
{
    switch(prod)
    {
        case seveneight:
            return make_pair(7,8);
        case sevennine:
            return make_pair(7,9);
        case seventen:
            return make_pair(7,10);
        case sevensixteen:
            return make_pair(7,16);
        case sevenfortythree:
            return make_pair(7,43);
        case eightnine:
            return make_pair(8,9);
        case eightten:
            return make_pair(8,10);
        case eightsixteen:
            return make_pair(8,16);
        case eightfortythree:
            return make_pair(8,43);
        case nineten:
            return make_pair(9,10);
        case ninesixteen:
            return make_pair(9,16);
        case ninefortythree:
            return make_pair(9,43);
        case tensixteen:
            return make_pair(10,16);
        case tenfortythree:
            return make_pair(10,43);
        case sixteenfortythree:
            return make_pair(16,43);
    }
}


int main()
{
    int arr[6];
    int prod1,prod2,prod3,prod4;
    cout<<0<<" "<<1<<endl;
    cin>>prod1;
    cout<<0<<" "<<2<<endl;
    cin>>prod2;
    cout<<3<<" "<<4<<endl;
    cin>>prod3;
    cout<<3<<" "<<5<<endl;
    cin>>prod4;


    pair<int,int>  p1=getnum(prod1);
    pair<int,int>  p2=getnum(prod2);
    pair<int,int>  p3=getnum(prod3);
    pair<int,int>  p4=getnum(prod4);

    if(p1.first==p2.first || p1.first==p2.second)
    {
        arr[0]=p1.first;
        arr[1]=p1.second;
        if(p1.first==p2.first)
            arr[2]=p2.second;
        else
            arr[2]=p2.first;
    }
    else
    {
        arr[0]=p1.second;
        arr[1]=p1.first;
        if(p1.second==p2.first)
            arr[2]=p2.second;
        else
            arr[2]=p2.first;
    }

    if(p3.first==p4.first || p3.first==p4.second)
    {
        arr[3]=p3.first;
        arr[4]=p3.second;
        if(p3.first==p4.first)
            arr[5]=p4.second;
        else
            arr[5]=p4.first;
    }
    else
    {
        arr[3]=p3.second;
        arr[4]=p3.first;
        if(p3.second==p4.first)
            arr[5]=p4.second;
        else
            arr[5]=p4.first;
    }

    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";
    cout<<flush;
    return 0;
}
