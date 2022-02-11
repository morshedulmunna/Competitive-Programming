#include<bits/stdc++.h>
using namespace std;

int Calculating( long long n)
{
    long long a;
    if(n % 2 == 0)
        return a = n / 2;
    else
        return a = ((n + 1) / 2) * (-1);
}

int main ()
{

    long long n;
    cin>>n;
    auto res = Calculating(n);
    cout<<res<<endl;
    return 0;
}
