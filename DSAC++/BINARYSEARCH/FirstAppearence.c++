// FIRST APPREARENCE .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[8], key = 2, ans;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int fi = 0, li = 7, mid;
    mid = (fi + li) / 2;
    while (fi <= li)
    {
        if (arr[mid] == key)
        {
            ans = mid;
        }
        if (key > arr[mid])
        {
            fi = mid + 1;
        }
        else
        {
            li = mid - 1;
        }
        mid = (fi + li) / 2;
    }
    cout << ans;
    return 0;
}