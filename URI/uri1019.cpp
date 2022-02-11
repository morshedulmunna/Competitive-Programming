#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //     cout << fixed << setprecision(3);

    int sec, hours, mins, sec2;
    cin >> sec;
    hours = sec / 3600;
    sec = sec - hours * 3600;

    mins = sec / 60;
    sec = sec - mins * 60;

    cout << hours << ":" << mins << ":" << sec << "\n";

    return 0;
}
