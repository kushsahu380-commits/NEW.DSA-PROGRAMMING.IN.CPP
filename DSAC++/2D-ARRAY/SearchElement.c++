// Q6. Search an Element in Matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[3][3], key, row = -1, coloumn = -1;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "ENTER THE ELEMENT OF ARRAY OF INDEX " << "[" << i << "]" << "[" << j << "]" << " :";
            cin >> arr[i][j];
        }
    }
    cout << "ENTER THE ELEMENT : ";
    cin >> key;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] == key)
            {
                row = i;
                coloumn = j;
            }
        }
    }
    if (row != -1)
    {
        cout << "THE GIVEN ELEMENT " << key << " IS AT arr[" << row << "]" << "[" << coloumn << "]" << " OF THE ARRAY : ";
    }
    else
    {
        cout << "ELEMENT NOT FOUND IN ARRAY : ";
    }
    return 0;
}