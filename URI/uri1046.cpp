#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // cout << fixed << setprecision(2);

    int a, b, total;
    cin >> a >> b;
    if (a >= b)
    {
        total = 24 - a + b;
    }
    else
        total = (24 - a) + (b - 24);

    cout << "O JOGO DUROU " << total << " HORA(S)" << endl;

    return 0;
}
