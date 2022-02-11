#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int test;
    cin>>test;
    while(test--)
    {
        int shop;
        cin>>shop;
        while(shop--)
        {
            int shop_list[1000],distance=0;
            int n = sizeof(shop_list)/sizeof(shop_list[0]);
            for(int i=0; i<shop; i++)
            {
                cin>>shop_list[i];

            }
            sort(shop_list,shop_list+n);
            for (int i = 0; i < shop; ++i)
            {
                cout<<shop_list[i] <<endl;
            }


        }

    }


    return 0;
}


