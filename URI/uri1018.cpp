#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //     cout << fixed << setprecision(3);

    int m, vx;
    cin >> m;
    cout << m << "\n";
    cout << m / 100 << " nota(s) de R$ 100,00\n";
    vx = m % 100;
    cout << vx / 50 << " nota(s) de R$ 50,00\n";
    vx = vx % 50;
    cout << vx / 20 << " nota(s) de R$ 20,00\n";
    vx = vx % 20;
    cout << vx / 10 << " nota(s) de R$ 10,00\n";
    vx = vx % 10;
    cout << vx / 5 << " nota(s) de R$ 5,00\n";
    vx = vx % 5;
    cout << vx / 2 << " nota(s) de R$ 2,00\n";
    vx = vx % 2;
    cout << vx << " nota(s) de R$ 1,00\n";

    return 0;
}
