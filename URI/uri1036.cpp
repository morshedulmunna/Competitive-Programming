#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(5);

    double a, b, c, x1, x2;
    cin >> a >> b >> c;
    if ((a == 0) || (b * b < 4 * a * c))
    {
        cout << "Impossivel calcular\n";
    }
    else
    {
        x1 = ((-b + sqrt((b * b) - (4 * a * c)))) / (2 * a);
        x2 = ((-b - sqrt((b * b) - (4 * a * c)))) / (2 * a);
        cout << "R1 = " << x1 << endl;
        cout << "R2 = " << x2 << endl;
    }

    return 0;
}
