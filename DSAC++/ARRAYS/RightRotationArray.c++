// Right Rotation
// Q10. Right Rotate by One Position
// Rotate the array one position to the right.
// 1 2 3 4 5
// ↓
// 5 1 2 3 4
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    int temp = arr[4];
    for (int i = 4; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}