// binary search .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, mid, key;
    cout << "ENTER THE SIZE OF ARRAY : ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "ENTER THE KEY : ";
    cin >> key;
    int fi = 0, li = n - 1;
    mid = ((fi + li) / 2);
    while (fi <= li)
    {
        if (arr[mid] == key)
        {
            cout << mid;
        }
        if (key > arr[mid])
        {
            fi = mid + 1;
        }
        else
        {
            li = mid - 1;
        }
        mid = ((fi + li) / 2);
    }
    return 0;
}