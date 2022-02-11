// create binary to decimal conversion c++ program
#inclued <iostream>
using namespace std;
int main()
{
    int binary, decimal = 0, i = 0, remainder;
    cout << "Enter a binary number: ";
    cin >> binary;
    while (binary != 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * pow(2, i);
        ++i;
        binary = binary / 10;
    }
    cout << "Decimal equivalent: " << decimal;
    return 0;
}
