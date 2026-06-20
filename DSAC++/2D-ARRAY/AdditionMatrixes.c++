// Matrix Addition .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], brr[3][3], crr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER THE ELEMENT OF ARRAY OF INDEX arr" << "[" << i << "]" << "[" << j << "]" << " :";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER THE ELEMENT OF ARRAY OF INDEX brr" << "[" << i << "]" << "[" << j << "]" << " :";
            cin >> brr[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}