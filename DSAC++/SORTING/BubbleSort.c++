// BUBBLE SORT .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6];
    for (int i = 0; i < 6; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        int k = 0;
        for (int j = 1; j < 6 - i; j++)
        {
            if (arr[k] > arr[j])
            {
                int temp = arr[k];
                arr[k] = arr[j];
                arr[j] = temp;
            }
            k++;
        }
    }
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}