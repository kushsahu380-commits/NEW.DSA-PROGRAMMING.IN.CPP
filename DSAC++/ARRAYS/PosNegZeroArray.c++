#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5], z = 0, n = 0, p = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > 0)
        {
            p++;
        }
        else if (arr[i] < 0)
        {
            n++;
        }
        else
        {
            z++;
        }
    }
    cout << "POSITIVE ELEMENT : " << p << endl;
    cout << "NEGATIVE ELEMENT : " << n << endl;
    cout << "ZERO ELEMENT : " << z << endl;
    return 0;
}