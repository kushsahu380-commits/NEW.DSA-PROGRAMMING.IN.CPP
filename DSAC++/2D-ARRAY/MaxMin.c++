// Q3. Maximum and Minimum Element in Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], max = INT_MIN, min = INT_MAX;
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
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
            if (min > arr[i][j])
            {
                min = arr[i][j];
            }
        }
    }
    cout << "MAXIMUM : " << max << endl;
    cout << "MINIMUM : " << min;
    return 0;
}