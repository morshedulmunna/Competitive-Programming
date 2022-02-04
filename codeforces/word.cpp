#include<bits/stdc++.h>

using namespace std;

int  main()
{
    int i=0, up=0, low=0;
    string stn;
    cin>>stn;
    while(i<stn.length())
    {
        char latter = stn.at(i);
        int asc = int(latter);
        if(asc >= 65 && asc<=95 )
        {
            up++;
        }
        else if(asc >= 97 && asc<=122 )
        {
            low++;
        }
        i++;
    }

    if (up > low)
    {
        transform(stn.begin(), stn.end(), stn.begin(), ::toupper);
        cout << stn << endl;
    }
    else
    {
        transform(stn.begin(), stn.end(), stn.begin(), ::tolower);
        cout << stn << endl;
    }
    return 0;
}
