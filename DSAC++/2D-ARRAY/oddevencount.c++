// COUNT EVEN AND ODD .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], even = 0, odd = 0;
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
            if (arr[i][j] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
    }
    cout << "EVEN : " << even << endl;
    cout << "ODD : " << odd;
    return 0;
}