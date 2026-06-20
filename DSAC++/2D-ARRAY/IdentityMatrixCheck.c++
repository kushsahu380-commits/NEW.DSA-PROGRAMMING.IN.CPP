// Identity Matrix Check .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int r, c;
    cout << "ENTER THE NUMBER OF ROWS OF MATRIX : ";
    cin >> r;
    cout << "ENTER THE NUMBER OF COLOUMNS OF MATRIX : ";
    cin >> c;
    int arr[r][c], count1 = 0;
    if (r != c)
    {
        cout << "NOT AN IDENTITY MATRIX : ";
        return 0;
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << "ENTER THE ELEMENT OF ARRAY OF INDEX " << "[" << i << "]" << "[" << j << "]" << " :";
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (i == j && arr[i][j] == 1)
            {
                count1++;
            }
            else if (arr[i][j] == 0)
            {
                continue;
            }
            else
            {
                cout << "NOT AN IDENTITY MATRIX : ";
                return 0;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    if (count1 == r)
    {
        cout << "IDENTITY MATRIX : ";
    }
    else
    {
        cout << "NOT A INDENTITY MATRIX : ";
    }
    return 0;
}