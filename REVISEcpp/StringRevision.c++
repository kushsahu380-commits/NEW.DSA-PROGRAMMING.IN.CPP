// STRINGS
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // input/output
    // string name = "KUSH";
    // cout << name;
    // getline function-->It is used to counter the space .
    // string name;
    // cout << "ENTER THE NAME :";
    // getline(cin, name);
    // cout << name;
    // s.length();--> Gives the
    // s.size();--> length of string .
    // The last index of string is always (name.length()-1);
    // string name;
    // getline(cin, name);
    // cout << name << endl;
    // cout << name.length();
    // Changing character .
    // string name = "Hello";
    // name[0] = 'Y';
    // cout << name;
    // string s = "kush";
    // s.push_back('i');--->It is used to insert element from the last index of the string .
    // s.pop_back();--->It is used to remove the element from the last index of the string .
    // cout << s << endl;
    // Comparing two strings .
    // string s1, s2;
    // getline(cin, s1);
    // getline(cin, s2);
    // if (s1 == s2)
    // {
    //     cout << "Same";
    // }
    // else
    // {
    //     cout << "Not Same";
    // }
    // CONCATINATION OF TWO STRINGS .
    // string s1, s2, result;
    // cout << "ENTER THE FIRST STRING : ";
    // getline(cin, s1);
    // cout << "ENTER THE SECOND STRING : ";
    // getline(cin, s2);
    // result = s1 + " " + s2;
    // cout<<result;
    // Searching for a character .
    // string s;
    // int index;
    // cout << "ENTER THE STRING :";
    // getline(cin, s);
    // char key;
    // cout << "ENTER THE CHARACTER : ";
    // cin >> key;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (key == s[i])
    //     {
    //         cout << "THE CHARACTER " << "'" << key << "'" << " IS PRESENT IN INDEX" << " NO " << i << endl;
    //     }
    // }
    //     Level 1
    // 1. Print every character of a string .
    // string s;
    // getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    // 2. Find the length of a string without using .length().
    // string s;
    // int i = 0;
    // getline(cin, s);
    // while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    // {
    //     i++;
    // }
    // cout << "Length of string is :" << i;
    // 3. Count the vowels in a string.
    // string s;
    // int v = 0, c = 0;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
    //     {
    //         if ((s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')||(s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'))
    //         {
    //             v++;
    //         }
    //         else
    //         {
    //             c++;
    //         }
    //     }
    // }
    // cout << "THE NO OF VOWEL IS : " << v << endl;
    // cout << "THE NO OF CONSONANTS IS : " << c;
    // // 5. Convert lowercase characters to uppercase and uppercase character to lowercase.
    // string s;
    // cout << " ENTER THE STRING : ";
    // getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if ((s[i] >= 'A' && s[i] <= 'Z'))
    //     {
    //         s[i] = s[i] + 32;
    //     }
    //     else if ((s[i] >= 'a' && s[i] <= 'z'))
    //     {
    //         s[i] = s[i] - 32;
    //     }
    //     else if (s[i] == ' ')
    //     {
    //         continue;
    //     }
    //     else
    //     {
    //         cout << "THE STRING IS INVALID :";
    //         return 0;
    //     }
    // }
    // cout << "THE STRING AFTER CONVERSION IS : " << s;
    // 6. Reverse a string.
    // string s;
    // getline(cin, s);
    // int i = 0, j = (s.length() - 1);
    // while (i < j)
    // {
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout << "THE STRING AFTER REVERSING IS :" << s;
    // 7. Check whether a string is a palindrome.
    // string s, original;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // original = s;
    // int i = 0, j = (s.length() - 1);
    // while (i < j)
    // {
    //     int temp = s[i];
    //     s[i] = s[j];
    //     s[j] = temp;
    //     i++;
    //     j--;
    // }
    // if (original == s)
    // {
    //     cout << "THE STRING IS PLAINDROME : ";
    // }
    // else
    // {
    //     cout<<"THE STRING IS NOT PLAINDROME : ";
    // }
    // 8. Count the frequency of a particular character.
    // string s;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // char key;
    // int count = 0;
    // cout << "ENTER THE CHARACTER : ";
    // cin >> key;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (key == s[i])
    //     {
    //         count++;
    //     }
    // }
    // cout << "THE FREQUENCY OF CHARACTER " << key << " IS : " << count;
    // 9. Find the first occurrence of a character.
    // string s;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // char key;
    // bool found = false;
    // int index;
    // cout << "ENTER THE CHARACTER : ";
    // cin >> key;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (key == s[i])
    //     {
    //         index = i;
    //         found = true;
    //         break;
    //     }
    // }
    // if (found == true)
    // {
    //     cout << "THE FIRST OCCURRENCE OF CHARACTER " << key << " IN THE STRING IS AT INDEX NUMBER : " << index;
    // }
    // else
    // {
    //     cout << "CHARACTER NOT FOUND IN THE STRING : ";
    // }
    // 10. Find the last occurrence of a character.
    // string s;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // char key;
    // bool found = false;
    // int index;
    // cout << "ENTER THE CHARACTER : ";
    // cin >> key;
    // for (int i = s.length() - 1; i >= 0; i--)
    // {
    //     if (key == s[i])
    //     {
    //         index = i;
    //         found = true;
    //         break;
    //     }
    // }
    // if (found == true)
    // {
    //     cout << "THE LAST OCCURRENCE OF CHARACTER " << key << " IN THE STRING IS AT INDEX NUMBER : " << index;
    // }
    // else
    // {
    //     cout << "CHARACTER NOT FOUND IN THE STRING : ";
    // }
    // 11. Remove all spaces from a string .
    // string s, r;
    // // [kush sahu];
    // cout << "ENTER THE STRING :";
    // getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] != ' ')
    //     {
    //         r += s[i]; // used to add characters of one string to another .
    //     }
    // }
    // cout << "STRING AFTER REMOVING SPACES : " << r;
    // 12. Count words in a sentence
    // string s;
    // int count = 1;
    // cout << "ENTER THE SENTENCE : ";
    // getline(cin, s);
    // if (s == "")
    // {
    //     cout << "THE NUMBER OF WORDS IN THE STRING IS : " << 0;
    //     return 0;
    // }
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         count++;
    //     }
    // }
    // cout << "THE NUMBER OF WORDS IN THE SENTENCE IS : " << count;
    // 13. Find the frequency of every character
    // {h,e,l,l,o}
    // string s;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // cout << "Frequency of each character present in string : " << endl;
    // for (int i = 0; i < s.length(); i++)
    // {
    //     if (s[i] == ' ')
    //     {
    //         continue;
    //     }
    //     bool already = false;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             already = true;
    //             break;
    //         }
    //     }
    //     if (already == true)
    //     {
    //         continue;
    //     }
    //     int freq = 1;
    //     for (int j = i + 1; j < s.length(); j++)
    //     {
    //         if (s[i] == s[j])
    //         {
    //             freq++;
    //         }
    //     }
    //     cout << s[i] << " --> " << freq << endl;
    // }
    // 14. Check whether two strings are anagrams
    // string s1, s2;
    // bool happen = true;
    // cout << "ENTER THE FIRST STRING : ";
    // getline(cin, s1);
    // cout << "ENTER THE SECOND STRING : ";
    // getline(cin, s2);
    // if (s1.length() != s2.length())
    // {
    //     cout << "THEY ARE NOT ANAGRAM : ";
    //     return 0;
    // }
    // // {listen};
    // // {silent};
    // // {aab};
    // // {abb};
    // for (int i = 0; i < s1.length(); i++)
    // {
    //     bool found = false;
    //     for (int j = 0; j < s2.length(); j++)
    //     {
    //         if (s1[i] == s2[j])
    //         {
    //             found = true;
    //             s2[j] = '#';
    //             break;
    //         }
    //     }
    //     if (found == false)
    //     {
    //         happen = false;
    //         break;
    //     }
    // }
    // if (happen == true)
    // {
    //     cout << "THE STRINGS ARE ANAGRAM : ";
    // }
    // else
    // {
    //     cout << "THE STRINGS ARE NOT ANAGRAM : ";
    // }
    // 15. Find the first non-repeating character
    // {aabbcdde};
    // string s;
    // cout << "ENTER THE STRING : ";
    // getline(cin, s);
    // for (int i = 0; i < s.length(); i++)
    // {
    //     bool  unique = true;
    //     for (int j = 0; j < s.length(); j++)
    //     {
    //         if (i == j) continue;
    //         if (s[i] == s[j])
    //         {
    //             unique = false;
    //             break;
    //         }
    //     }
    //     if (unique == true)
    //     {
    //         cout << "THE FIRST NON-REPEATING CHARACTER IS : " << s[i];
    //         return 0;
    //     }
    // }  
    return 0;
}