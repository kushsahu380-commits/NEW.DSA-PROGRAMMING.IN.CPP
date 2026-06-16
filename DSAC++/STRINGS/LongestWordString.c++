// Longest word in the string .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, word = "", longest = "";
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            word += str[i];
        }
        else
        {
            if (word.length() > longest.length())
            {
                longest = word;
            }
            word = "";
        }
    }
    if (word.length() > longest.length())
    {
        longest = word;
    }
    cout << "LONGEST WORD : " << longest << endl;
    cout << "LENGTH : " << longest.length();
    return 0;
}