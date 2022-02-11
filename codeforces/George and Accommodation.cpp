#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,people,capacity,roomCount=0;
    cin>>T;
    while(T--)
    {
        cin>>people>>capacity;
        if(capacity-people>=2)
            roomCount++;
    }
    cout<<roomCount<<endl;
    return 0;
}