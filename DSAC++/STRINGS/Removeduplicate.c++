//  Q16. Remove duplicate characters
//   Input:  programming
//   Output: progamin
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool found = true;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                found = false;
                for (int k = j; k < s.length() - 1; k++)
                {
                    s[k] = s[k + 1];
                }
                s.pop_back();
                j--;
            }
        }
    }
    if (found == false)
    {
        cout << "String after removing duplicate characters is : " << s;
    }
    else
    {
        cout << "String does not duplicate characters ";
    }
    return 0;
}