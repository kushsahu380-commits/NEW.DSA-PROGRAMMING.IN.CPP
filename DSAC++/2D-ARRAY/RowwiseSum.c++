// Q4. Row-wise Sum .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3];
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
        int rsum = 0;
        for (int j = 0; j < 3; j++)
        {
            rsum += arr[i][j];
        }
        cout << "SUM OF ROW " << i << " IS : " << rsum << endl;
    }
    return 0;
}