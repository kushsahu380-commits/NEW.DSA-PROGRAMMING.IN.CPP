// Compare Two Strings
// abc
// abc
// Output: Equal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2;
    bool flag = true;
    cout << "ENTER THE STRING 1 : ";
    getline(cin, str1);
    cout << "ENTER THE STRING 2 : ";
    getline(cin, str2);
    if (str1.length() == str2.length())
    {
        for (int i = 0; i < str1.length(); i++)
        {
            if (str1[i] != str2[i])
            {
                flag = false;
                break;
            }
        }
    }
    else
    {
        flag = false;
    }
    if (flag == true)
    {
        cout << "BOTH THE STRINGS ARE EQUAL : ";
    }
    else
    {
        cout << "BOTH THE STRINGS ARE NOT EQUAL : ";
    }
    return 0;
}