// Level 1 – Warm-up (10 Questions)
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Print the multiplication table of a number.
    // int x;
    // cout << "ENTER THE NUMBER :";
    // cin >> x;
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout << x * i << endl;
    // }
    // Find the factorial of a number.
    // long x, fact = 1;
    // cout << "ENTER THE NUMBER :";
    // cin >> x;
    // int original = x;
    // while (x != 0)
    // {
    //     fact *= x;
    //     x--;
    // }
    // cout << "THE FACTORIAL OF " << original << "!" << " IS " << fact;
    // Reverse a number.
    // int x, rev = 0;
    // cout << "ENTER THE NUMBER :";
    // cin >> x;
    // while (x != 0)
    // {
    //     int num = x % 10;
    //     rev = rev * 10 + num;
    //     x /= 10;
    // }
    // cout << "THE REVERSE OF THE NUMBER IS : " << rev;
    // Check if a number is a palindrome.
    // int x, rev = 0;
    // cout << "ENTER THE NUMBER : ";
    // cin >> x;
    // int original = x;
    // while (x != 0)
    // {
    //     int num = x % 10;
    //     rev = rev * 10 + num;
    //     x /= 10;
    // }
    // if (original == rev)
    // {
    //     cout << "THE GIVEN NUMBER IS PALINDROME : ";
    // }
    // else
    // {
    //     cout << "THE GIVEN NUMBER IS NOT A PALINDROME :";
    // }
    // Find the LCM of two numbers.
    //     int num1, num2;
    //     cout << "ENTER THE FIRST NUMBER : ";
    //     cin >> num1;
    //     cout << "ENTER THE SECOND NUMBER :  ";
    //     cin >> num2;
    //     int great = num2;
    //     while (num2 % num1 != 0)
    //     {
    //         num2 += great;
    //     }
    //     cout << "THE LCM IS : " << num2;
    // Print the Fibonacci series up to n terms.
    // int x = 0, y = 1, z;
    // cout << x << " ";
    // for (int i = 0; i < 5; i++)
    // {
    //     z = x + y;
    //     x = y;
    //     cout << y << " ";
    //     y = z;
    // }
    // Dry Run .
    // output --> 0 1 1 2 3 5
    // i=0; --> z=1;x=1;y=1;
    // i=1; --> z=2;x=1;y=2;
    // i=2; --> z=3;x=2;y=3;
    // i=3; --> z=5;x=3;y=5;
    // i=4; --> z=8;x=5;y=8;
    // Count the digits of a number.
    // int x, count = 0;
    // cout << "ENTER THE NUMBER : ";
    // cin >> x;
    // if (x == 0)
    // {
    //     count = 1;
    // }
    // else
    // {
    //     while (x != 0)
    //     {
    //         x /= 10;
    //         count++;
    //     }
    // }
    // cout << "NUMBER OF DIGITS IN A NUMBER IS : " << count;
    // Find the sum of digits of a number.
    // int x, sum = 0;
    // cout << "ENTER THE NUMBER : ";
    // cin >> x;
    // while (x != 0)
    // {
    //     sum += (x % 10);
    //     x /= 10;
    // }
    // cout << "THE SUM OF NUMBER IS : " << sum;
    // Check wheather a number is armstrong number .
    int x, org, arm = 0;
    cout << "ENTER THE NUMBER : ";
    cin >> x;
    org = x;
    while (x != 0)
    {
        int n = x % 10;
        arm += (n * n * n);
        x /= 10;
    }
    if (org == arm)
    {
        cout << "THE GIVEN NUMBER IS AN ARMSTRONG NUMBER : ";
    }
    else
    {
        cout << "THE GIVEN NUMBER IS NOT ARMSTRONG NUMBER : ";
    }
    return 0;
}