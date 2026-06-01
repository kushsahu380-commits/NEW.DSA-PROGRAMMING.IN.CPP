// Sum of two numbers .
// Largest of three numbers .
// Leap year check .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // float x, y;
    // char op;
    // cout << "ENTER THE FIRST NUMBER : ";
    // cin >> x;
    // cout << "ENTER THE SECOND NUMBER : ";
    // cin >> y;
    // cout << "ENTER THE OPERATOR :";
    // cin >> op;
    // // int sum = x + y;
    // // cout << "THE SUM OF TWO NUMBERS " << x << " and " << y << " IS " << sum << endl;
    // if (op == '+')
    // {
    //     cout << "THE SUM IS " << x + y;
    // }
    // else if (op == '-')
    // {
    //     cout << "THE DIFFERENCE IS " << x - y;
    // }
    // else if (op == '*')
    // {
    //     cout << "THE MULTIPLY IS " << x * y;
    // }
    // else if (op == '/')
    // {
    //     cout << "THE DIVISION IS " << x / y;
    // }
    // else
    // {
    //     cout << "MATHEMATICAL ERROR : ";
    // }
    int yr;
    cout << "ENTER THE YEAR : ";
    cin >> yr;
    if (yr % 4 == 0)
    {
        cout << "THE YEAR " << yr << " IS LEAP YEAR : ";
    }
    else
    {
        cout << "THE YEAR " << yr << " IS NOT A LEAP YEAR : ";
    }
    return 0;
}