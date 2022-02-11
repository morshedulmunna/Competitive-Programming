#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //cout << fixed << setprecision(2);

    int i, j, p, T, a[10];
    cin >> T;

    for (i = 0; i < 10; i++)
    {
        if (i == 0)
            a[i] = T;
        else
            a[i] = a[i - 1] * 2;

        cout << "N[" << i << "] = " << a[i] << "\n";
    }

    return 0;
}
