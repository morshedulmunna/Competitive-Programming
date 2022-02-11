#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    float arr[5] = {4.00, 4.50, 5.00, 2.00, 1.50}, snack;
    int x, y;

    cin >> x >> y;

    snack = arr[x - 1] * y;

    cout << "Total: R$ " << snack << endl;

    return 0;
}
