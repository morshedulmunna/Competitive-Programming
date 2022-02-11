
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(4);

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    cout << sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) << "\n";

    return 0;
}
