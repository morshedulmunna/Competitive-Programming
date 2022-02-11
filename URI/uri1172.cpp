#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << fixed << setprecision(2);

    int i;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] <= 0)
        {
            cout << "X[" << i << "] = " << 1 << "\n";
        }
        else
        {
            cout << "X[" << i << "] = " << a[i] << "\n";
        }
    }

    return 0;
}
