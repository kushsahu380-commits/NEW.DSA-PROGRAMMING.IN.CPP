// Level 2 – Arrays (10 Questions)
// Find the largest element in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    //     int n, max = INT_MIN;
    //     cout << "ENTER THE SIZE OF THE ARRAY : ";
    //     cin >> n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (max < arr[i])
    //         {
    //             max = arr[i];
    //         }
    //     }
    //     // {3,1,2,5,4};
    //     cout << "THE LARGEST ELEMENT IN THE ARRAY IS : " << max;
    // Find the smallest element .
    // int n, min = INT_MAX;
    // cout << "ENTER THE SIZE OF THE ARRAY : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (min > arr[i])
    //     {
    //         min = arr[i];
    //     }
    // }
    // cout << "THE MINIMUM ELEMENT IN THE ARRAY IS : " << min;
    //     int n, max = INT_MIN, smax = INT_MIN;
    //     cout << "ENTER THE SIZE OF ARRAY :";
    //     cin >> n;
    //     int arr[n];
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (max < arr[i])
    //         {
    //             max = arr[i];
    //         }
    //     }
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] != max && smax < arr[i])
    //         {
    //             smax = arr[i];
    //         }
    //     }
    //     cout << "THE SECOND LARGEST ELEMENT IS  : " << smax;
    //     return 0;
    // }
    // Reverse an array.
    // int n;
    // cout << "ENTER THE SIZE OF ARRAY : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int i = 0, j = n - 1;
    // while (i != j)
    // {
    //     int temp = arr[i];
    //     arr[i] = arr[j];
    //     arr[j] = temp;
    //     i++;
    //     j--;
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // Check whether an array is sorted.
    // int n;
    // bool k = true;
    // cout << "ENTER THE SIZE OF ARRAY : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] > arr[j])
    //         {
    //             k = false;
    //         }
    //     }
    // }
    // if (k == true)
    //     cout << "The array is sorted : ";
    // else
    //     cout << "The array is not sorted :";
    // Count even and odd elements.
    // int n, even = 0, odd = 0;
    // cout << "ENTER THE SIZE OF ARRAY : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] % 2 == 0)
    //     {
    //         even++;
    //     }
    //     else
    //     {
    //         odd++;
    //     }
    // }
    // cout << "THE NUMBER OF EVEN AND ODD NUMBERS IN THIS ARRAY IS " << even << " and " << odd;
    // Find the sum and average of array elements.
    // int n, sum = 0;
    // cout << "ENTER THE SIZE OF ARRAY : ";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     sum += arr[i];
    // }
    // float avg = (float)sum / n;
    // cout << "SUM = " << sum << endl;
    // cout << "AVERAGE = " << avg;
    // Search for an element (Linear Search).
    // int n, key = 3, index;
    // cout << "ENTER THE SIZE OF THE ARRAY :";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     if (key == arr[i])
    //     {
    //         index = i;
    //         break;
    //     }
    // }
    // cout << "THE ELEMENT " << key << " IS AT THE INDEX " << index;
    // Find the duplicate elements from a sorted array.
    // int n index;
    // bool flag = true;
    // cout << "ENTER THE SIZE OF THE ARRAY :";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             index = i;
    //             flag = false;
    //             break;
    //         }
    //     }
    //     if (flag == false)
    //     {
    //         break;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "There is no duplicate element in the array : ";
    // }
    // else
    // {
    //     cout << "The duplicate elements in the array is : " << arr[index];
    // }
    // Rotate an array left by one position.
    // {1,2,3,4,5}
    // after left rotation
    // {2,3,4,5,1}
    // int n;
    // cout << "ENTER THE SIZE OF THE ARRAY :";
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int lf = arr[0];
    // for (int i = 0; i < n - 1; i++)
    // {
    //     arr[i] = arr[i + 1];
    // }
    // arr[n - 1] = lf;
    // cout << "Our array after left shift : " << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    return 0;
}