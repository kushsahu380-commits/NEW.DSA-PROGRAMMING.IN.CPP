// Check if Array is Sorted
// Q3. Check Ascending Order
// Determine whether the array is sorted in ascending order.
// Print "Sorted" or "Not Sorted".
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // bool flag = true;
    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     if (arr[i] > arr[i + 1])
    //     {
    //         flag = false;
    //         break;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "Sorted in ascending order : ";
    // }
    // else
    // {
    //     cout << "Not Sorted in ascending order :";
    // }
    int arr[5];
    bool flag = true;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            cout << i << endl;
            flag = false;
        }
    }
    if (true == flag)
    {
        cout<<"No violation of ascending order : ";
    }
    return 0;
}