#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    bool flag = true;
    int count1 = 0, count2 = 0;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            count1++;
        }
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            count2++;
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
        cout << "THE NUMBER OF VOWELS IN STRING IS : " << count1 << endl;
        cout << "THE NUMBER OF CONSONANTS IN STRING IS : " << count2;
    }
    else
    {
        cout << " STRING CONTAINS INVALID CHARACTERS : ";
    }
    return 0;
}