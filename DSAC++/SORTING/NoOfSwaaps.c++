// 1. Count Number of Swaps .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5], count = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        int k = 0;
        for (int j = k + 1; j < 5 - i; j++)
        {
            if (arr[k] > arr[j])
            {
                swap(arr[k], arr[j]);
                count++;
            }
            k++;
        }
    }
    cout << "THE NUMBER OF SWAAPS ARE : " << count;
    return 0;
}