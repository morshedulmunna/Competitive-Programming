#include <bits/stdc++.h>
using namespace std;

int main()
{
    // uncomment if you want to use cin cout for input output ( don't mix with scanf, printf ).
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout << fixed << setprecision(2);

    double salary, newsalary, S;
    cin >> salary;

    if (salary <= 400.00 && salary >= 0)
    {
        newsalary = salary * 1.15;
        S = newsalary - salary;
        cout << "Novo salario: " << newsalary << endl;
        cout << "Reajuste ganho: " << S << endl;
        cout << "Em percentual: 15 %" << endl;
    }
    else if (salary <= 800.00 && salary >= 400.01)
    {
        newsalary = salary * 1.12;
        S = newsalary - salary;
        cout << "Novo salario: " << newsalary << endl;
        cout << "Reajuste ganho: " << S << endl;
        cout << "Em percentual: 12 %" << endl;
    }
    else if (salary <= 1200.00 && salary >= 800.01)
    {
        newsalary = salary * 1.10;
        S = newsalary - salary;
        cout << "Novo salario: " << newsalary << endl;
        cout << "Reajuste ganho: " << S << endl;
        cout << "Em percentual: 10 %" << endl;
    }
    else if (salary <= 2000.00 && salary >= 1200.01)
    {
        newsalary = salary * 1.07;
        S = newsalary - salary;
        cout << "Novo salario: " << newsalary << endl;
        cout << "Reajuste ganho: " << S << endl;
        cout << "Em percentual: 7 %" << endl;
    }
    else if (salary > 2000.00)
    {
        newsalary = salary * 1.04;
        S = newsalary - salary;
        cout << "Novo salario: " << newsalary << endl;
        cout << "Reajuste ganho: " << S << endl;
        cout << "Em percentual: 4 %" << endl;
    }

    return 0;
}
