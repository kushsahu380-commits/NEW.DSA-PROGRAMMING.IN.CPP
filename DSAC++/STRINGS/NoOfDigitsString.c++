// count --->digits,alphabet,space .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    bool flag = true;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    int integer = 0, character = 0, space = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
        {
            integer++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            character++;
        }
        else if (str[i] == ' ')
        {
            space++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "NO OF DIGITS IN STRING IS : " << integer << endl;
        cout << "NO OF CHARACTERS IN STRING IS : " << character << endl;
        cout << "NO OF SPACES IN STRING IS : " << space;
    }
    else
    {
        cout << "ELEMENTS IN STRING IS INVALID : ";
    }
    return 0;
}