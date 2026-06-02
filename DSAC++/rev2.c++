// Factorial
// Prime number
// Fibonacci series
// Reverse a number
// Sum of digits
// Armstrong number
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // factorial
    //  int n, fact = 1;
    //  cout << "ENTER THE NUMBER : ";
    //  cin >> n;
    //  for (int i = 1; i <= n; i++)
    //  {
    //      fact *= i;
    //  }
    //  cout << "THE FACTORIAL OF " << n << "!" << " is : " << fact;
    //  fibonacci series .
    // int n, x = 0, y = 1, fab;
    // cout << "ENTER THE NUMBER : ";
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << x << " ";
    //     fab = x + y;
    //     x = y;
    //     y = fab;
    // }
    // Reverse a number .
    // int num, rev = 0;
    // cout << "ENTER THE NUMBER : ";
    // cin >> num;
    // while (num != 0)
    // {
    //     int x = num % 10;
    //     rev = rev * 10 + x;
    //     num = num / 10;
    // }
    // cout << rev;
    // Sum of digits of a number .
    // int x, sum = 0;
    // cout << "ENTER THE NUMBER :";
    // cin >> x;
    // while (x != 0)
    // {
    //     int y = x % 10;
    //     sum += y;
    //     x /= 10;
    // }
    // cout << sum;
    int num, original, arms = 0;
    cout << "ENTER THE NUMBER : ";
    cin >> num;
    original = num;
    while (num != 0)
    {
        int x = num % 10;
        arms += (x * x * x);
        num = num / 10;
    }
    if (original == arms)
    {
        cout << "THE GIVEN NUMBER IS ARMSTRONG : ";
    }
    else
    {
        cout << "THE GIVEN NUMBER IS NOT PALINDROME";
    }
    return 0;
}