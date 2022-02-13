#include<bits/stdc++.h>
using namespace std;

int Calculating( int n)
{
    int reversed = 0, remainder;
    
    while (n != 0)
    {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }

 return reversed;
}

int main ()
{
    int n;
    cin>>n;
    int original = n;
    int reversed = Calculating(n);

    if (original == reversed)
        cout<<"true"<<endl;
    else
        cout<<"false"<<endl;

    return 0;
}
