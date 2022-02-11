#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int Test,L,H,W;
    cin>>Test;
     int i=1;
    while ( Test-- )
    {
        cin>>L>>H>>W;
        cout<<"Case "<<i<<": ";
        if(L<=20&&H<=20&&W<=20)
        {
            cout<<"good"<<endl;
        }
        else
        {
            cout<<"bad"<<endl;
        }
        i++;
    }

    return 0;
}
