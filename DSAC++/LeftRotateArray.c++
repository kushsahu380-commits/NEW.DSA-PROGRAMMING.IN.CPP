// Left Rotation
// Q8. Left Rotate by One Position
// Rotate the array one position to the left.
// 1 2 3 4 5
// ↓
// 2 3 4 5 1
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[0];
    for (int i = 0; i < 4; i++)
    {
        arr[i] = arr[i + 1];
    }
    arr[4] = temp;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}