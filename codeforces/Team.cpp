#include <iostream>
using namespace std;

int main ()
{
    int test;
    cin>>test;
    int solve=0;
    while(test--)
    {
        int p,v,t;
        cin>>p>>v>>t;
        if(p+v+t>=2)
        {
            solve+=1;
        }
    }
    cout<<solve<<endl;
    return 0;
}
