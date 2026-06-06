// Reverse String .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    int i = 0, j = (str.length() - 1);
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
    cout << str;
    return 0;
}