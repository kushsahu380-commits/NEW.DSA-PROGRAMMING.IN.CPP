// Frequency of a Character
// String: programming
// Character: m
// Output: 2
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0;
    char ch;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    cout << "ENTER THE CHARACTER : ";
    cin >> ch;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }
    cout << "FREQUENCY OF GIVEN CHARACTER " << ch << " IS : " << count;
    return 0;
}