#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    return fact;
}
int main()
{
    int n;
    cout << "ENTER THE NUMBER : ";
    cin >> n;
    cout << n << " !" << " is : " << factorial(n);
    return 0;
}