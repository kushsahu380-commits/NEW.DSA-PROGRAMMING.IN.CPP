// Q5. Column-wise Sum .
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
        int csum = 0;
        for (int j = 0; j < 3; j++)
        {
            csum += arr[j][i];
        }
        cout << "SUM OF COLOUMN " << i << " IS : " << csum << endl;
    }
    return 0;
}