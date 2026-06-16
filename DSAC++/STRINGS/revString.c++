// Reverse String
// Palindrome String
// Count Vowels and Consonants
// Count Digits and Spaces
// Toggle Case
// Compare Two Strings
// Concatenate Two Strings
// Frequency of Character
// Count Words in Sentence
// Find Longest Word in Sentence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // Reverse String
    // string str;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // int i = 0, j = (str.length() - 1);
    // while (i < j)
    // {
    //     int temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout << str;
    // Palindrome String
    // string str, original;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // int i = 0, j = (str.length() - 1);
    // original = str;
    // while (i < j)
    // {
    //     int temp = str[i];
    //     str[i] = str[j];
    //     str[j] = temp;
    //     i++;
    //     j--;
    // }
    // if (str == original)
    // {
    //     cout << "STRING IS PALINDROME : ";
    // }
    // else
    // {
    //     cout << "STRING IS NOT PALINDROME : ";
    // }
    // Count Vowels and Consonants
    // string str;
    // int vowel = 0, consonant = 0;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (('a' == str[i] || 'e' == str[i] || 'i' == str[i] || 'o' == str[i] || 'u' == str[i]) || ('A' == str[i] || 'E' == str[i] || 'I' == str[i] || 'O' == str[i] || 'U' == str[i]))
    //     {
    //         vowel++;
    //     }
    //     else if (str[i] == ' ')
    //     {
    //         continue;
    //     }
    //     else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    //     {
    //         consonant++;
    //     }
    //     else
    //     {
    //         cout << "THE GIVEN STRING CONTAINS INVALID CHARACTERS : ";
    //         return 0;
    //     }
    // }
    // cout << "VOWELS : " << vowel << endl;
    // cout << "CONSONANTS : " << consonant;
    // Count Digits and Spaces
    // string str;
    // int digits = 0, spaces = 0, characters = 0;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == ' ')
    //     {
    //         spaces++;
    //     }
    //     else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    //     {
    //         characters++;
    //     }
    //     else if (str[i] >= '0' && str[i] <= '9')
    //     {
    //         digits++;
    //     }
    //     else
    //     {
    //         cout << "GIVEN STRING IS INVALID : ";
    //         return 0;
    //     }
    // }
    // cout << "DIGITS : " << digits << endl;
    // cout << "SPACES : " << spaces << endl;
    // cout << "CHARACTERS : " << characters;
    // Toggle case
    // string str;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // char ch;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] >= 'a' && str[i] <= 'z')
    //     {
    //         ch = str[i] - 'a';
    //         str[i] = 'A' + ch;
    //     }
    //     else if (str[i] >= 'A' && str[i] <= 'Z')
    //     {
    //         ch = str[i] - 'A';
    //         str[i] = 'a' + ch;
    //     }
    //     else if (str[i] == ' ')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << "THE GIVEN STRING IS INVALID : ";
    //         return 0;
    //     }
    // }
    // cout << str;
    //  Compare Two Strings
    // int len;
    // bool flag = true;
    // string str1, str2;
    // cout << "ENTER THE FIRST STRING : ";
    // getline(cin, str1);
    // cout << "ENTER THE SECOND STRING : ";
    // getline(cin, str2);
    // if (str1.length() == str2.length())
    // {
    //     len = str1.length();
    // }
    // else
    // {
    //     cout << "THESE TWO STRINGS ARE NOT EQUAL : ";
    //     return 0;
    // }
    // for (int i = 0; i < len; i++)
    // {
    //     if (str1[i] != str2[i])
    //     {
    //         flag = false;
    //     }
    // }
    // if (flag == true)
    // {
    //     cout << "STRINGS ARE EQUAL : ";
    // }
    // else
    // {
    //     cout << "THESE TWO STRINGS ARE NOT EQUAL : ";
    // }
    // concatinate two strings .
    // string str1, str2, str3;
    // cout << "ENTER THE FIRST STRING : ";
    // getline(cin, str1);
    // cout << "ENTER THE SECOND STRING : ";
    // getline(cin, str2);
    // str3 = str1 + str2;
    // cout << str3;
    // // Frequency of Character
    // string str;
    // char key;
    // cout << "ENTER THE STRING : ";
    // getline(cin, str);
    // cout << "ENTER THE KEY : ";
    // cin >> key;
    // int x = 0;
    // for (int i = 0; i < str.length(); i++)
    // {
    //     if (str[i] == key)
    //     {
    //         x++;
    //     }
    //     else
    //     {
    //         continue;
    //     }
    // }
    // cout << " Frequency of Character " << "'" << key << "'" << " in the String " << str << " is : " << x;
    string str;
    cout << "ENTER THE STRING : ";
    getline(cin, str);
    int x = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            x++;
        }
    }
    cout << "THE NUMBER OF WORDS IN THE SENTENCE IS : " << x + 1;
    return 0;
}