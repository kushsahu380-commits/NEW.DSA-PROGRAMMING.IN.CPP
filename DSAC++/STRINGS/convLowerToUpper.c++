//  Convert Lowercase → Uppercase
// kush sahu
// ↓
// KUSH SAHU
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int ch;
    bool flag = true;
    cout<<"ENTER THE NUMBER :";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ch = str[i] - 'a';
            str[i] = 'A' + ch;
        }
        else if (str[i] == ' ')
        {
            continue;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << str;
    }
    else
    {
        cout << "GIVEN STRING IS INVALID : ";
    }
    return 0;
}