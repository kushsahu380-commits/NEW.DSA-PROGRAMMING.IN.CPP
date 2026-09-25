// Q26 — Find the longest palindrome word
// Write a C++ program to find the longest word that is a palindrome in a sentence.
// Input:
// madam is a level racecar driver
// Output:
// racecar
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, r, lp;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    int longest = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            int j = 0, k = r.length() - 1;
            string org = r;
            while (j < k)
            {
                char temp = r[j];
                r[j] = r[k];
                r[k] = temp;
                j++;
                k--;
            }
            if (org == r)
            {
                if (r.length() > longest)
                {
                    longest = r.length();
                    lp = r;
                }
            }
            r = "";
        }
        else
        {
            r += s[i];
        }
    }
    cout << "The longest word that is a palindrome in a sentence is : " << lp;
    return 0;
}