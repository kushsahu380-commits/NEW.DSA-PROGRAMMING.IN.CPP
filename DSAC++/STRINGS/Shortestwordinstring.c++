// 🔥 Q23 — Find the shortest word
// Write a C++ program to find the shortest word in a sentence.
// Input:
// I love programming in Cplusplus
// Output:
// I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int pre = INT_MAX, sindex = 0, eindex = 0, k;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        int fre = 0;
        if (s[i] != ' ')
        {
            for (int j = i; j < s.length(); j++)
            {
                if (s[j] != ' ')
                {
                    fre++;
                    if (j == s.length() - 1)
                    {
                        k = j;
                    }
                }
                else
                {
                    k = j - 1;
                    break;
                }
            }
            if (fre < pre)
            {
                sindex = i;
                pre = fre;
                eindex = k;
            }
        }
    }
    for (int i = sindex; i <= eindex; i++)
    {
        cout << s[i];
    }
    return 0;
}