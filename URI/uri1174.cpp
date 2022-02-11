#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(1);

    double A[100];
    int i;
    for (i = 0; i <= 99; i++)
        cin >> A[i];
    for (i = 0; i <= 99; i++)
    {
        if (A[i] <= 10.0)

            cout << "A[" << i << "] = " << A[i] << endl;
    }
    return 0;
}
