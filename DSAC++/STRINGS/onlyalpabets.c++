// Q20. Check whether a string contains only alphabets
// Hello → Yes
// Hello123 → No
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int alpha = 0;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alpha++;
        }
    }
    if (alpha == s.length())
    {
        cout << s << "-->" << "Yes";
    }
    else
    {
        cout << s << "-->" << "No";
    }
    return 0;
}