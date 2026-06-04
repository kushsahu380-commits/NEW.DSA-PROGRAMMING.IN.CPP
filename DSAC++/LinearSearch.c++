// Q1. Search an Element
// Given an array and a number x, check whether x exists in the array or not.
// Q2. Find First Occurrence
// Given an array and a number x, print the index of its first occurrence.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[8], x;
    // bool b = false;
    // for (int i = 0; i < 8; i++)
    // {
    //     cin >> arr[i];
    // }
    // cout << "ENTER THE NUMBER : ";
    // cin >> x;
    // for (int i = 0; i < 5; i++)
    // {
    //     if (x == arr[i])
    //     {
    //         b = true;
    //         break;
    //     }
    // }
    // if (b == true)
    //     cout << "found : ";
    // else
    //     cout << "not found : ";
    int arr[8], x, index = -1;
    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    cout << "ENTER THE NUMBER : ";
    cin >> x;
    for (int i = 0; i < 8; i++)
    {
        if (x == arr[i])
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        cout << "The index of first occurrence of " << x << " is : " << index;
    }
    else
    {
        cout << "not found : ";
    }
    return 0;
}