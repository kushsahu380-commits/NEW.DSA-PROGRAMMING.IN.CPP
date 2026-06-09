#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6], i = 0, j = 6, index;
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    while (i < j - 1)
    {
        // i -> position to fill
        // k -> search variable
        int k = i, max = INT_MIN;
        while (k < j)
        {
            if (max < arr[k])
            {
                max = arr[k];
                index = k;
            }
            k++;
        }
        for (int i = 0; i < 6; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        int temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
        i++;
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}