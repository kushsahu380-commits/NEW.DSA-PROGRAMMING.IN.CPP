// Q19. Count digits, alphabets and special characters
// Input:  Hello123@#
// Output:
// Alphabets = 5
// Digits = 3
// Special = 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int alphabets = 0, digits = 0, special = 0;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            alphabets++;
        }
        else if (s[i] == ' ')
        {
            continue;
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            digits++;
        }
        else
        {
            special++;
        }
    }
    cout << "Alphabets = " << alphabets << endl;
    cout << "Digits = " << digits << endl;
    cout << "Special = " << special;
    return 0;
}