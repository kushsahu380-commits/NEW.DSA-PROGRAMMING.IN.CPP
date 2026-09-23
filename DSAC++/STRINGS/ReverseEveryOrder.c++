// 🔥 Q25 — Reverse the order of words
// Write a C++ program to reverse the order of words, but do not reverse the characters inside each word.
// Input:
// I love programming
// Output:
// programming love I
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    int i = 0, j = s.length() - 1, start = 0, k;
    while (i < j)
    {
        int temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
    for (int i = 0; i <= s.length(); i++)
    {
        k = i - 1;
        if (s[i] == ' ' || i == s.length())
        {
            while (start < k)
            {
                int temp = s[start];
                s[start] = s[k];
                s[k] = temp;
                start++;
                k--;
            }
            start = i + 1;
        }
    }
    cout << "AFTER REVERSING THE ORDER OF WORDS OUR STRING IS : " << s;
    return 0;
}