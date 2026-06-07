// Palindrome String .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str, original;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    int i = 0, j = (str.length() - 1);
    original = str;
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    if (str == original)
    {
        cout << "THE STRING IS PALINDROME :";
    }
    else
    {
        cout << "THE STRING NOT PALINDROME :";
    }
    return 0;
}