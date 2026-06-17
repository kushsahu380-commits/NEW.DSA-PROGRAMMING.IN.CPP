// ⏳ Q2. Sum of All Elements in Matrix.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER THE ELEMENT OF ARRAY OF INDEX " << "[" << i << "]" << "[" << j << "]" << " :";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            sum += arr[i][j];
        }
    }
    cout << "SUM OF ALL ELEMENTS IS : " << sum;
    return 0;
}