// Q18. Remove a particular character
//  Input:  banana
//  Remove: a
//  Output: bnn
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    char c;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    cout << "ENTER THE CHARACTER TO REMOVE : ";
    cin >> c;
    for (int i = 0; i < s.length(); i++)
    {
        if (c == s[i])
        {
            for (int j = i; j < s.length() - 1; j++)
            {
                s[j] = s[j + 1];
            }
            s.pop_back();
            i--;
        }
    }
    cout << "STRING AFTER REMOVING CHARACTER " << c << " IS : " << s;
    return 0;
}