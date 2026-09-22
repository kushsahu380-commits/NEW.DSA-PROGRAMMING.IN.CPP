//  Q23 — Find the shortest word
// {Bro I am back}
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, r, q;
    int min = INT_MAX;
    cout << "ENTER THE NUMBER : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            if (r.length() < min)
            {
                min = r.length();
                q = r;
            }
            r = "";
        }
        else
        {
            r += s[i];
        }
    }
    if (r.length() < min)
    {
        q = r;
    }
    cout << "The shortest word in the sentence is : " << q;
    return 0;
}