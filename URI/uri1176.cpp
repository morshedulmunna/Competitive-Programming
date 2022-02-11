#include<bits/stdc++.h>
#define MAX 100000
using namespace std;

int Print3Smallest(int array[], int n)
{
    int one = MAX, tow = MAX, three = MAX;
    for (int i = 0; i < n; i++)
    {

        if (array[i] < one)
        {
            three = tow;
            tow = one;
            one = array[i];
        }

        else if (array[i] < tow)
        {
            three = tow;
            tow = array[i];
        }

        else if (array[i] < three)
            three = array[i];
    }

    cout  << one<< "\n" << tow<< "\n" << three << "\n";

}

int main()
{
    int N;
    cin>>N;
    int array[N];
    for(int i=0; i<N; i++)
    {
        cin>>array[i];
    }
    int n = sizeof(array) / sizeof(array[0]);
    Print3Smallest(array, n);
    return 0;
}
