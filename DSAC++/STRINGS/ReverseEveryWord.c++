// 🔥 Q24 — Reverse every word in a sentence .
// Write a C++ program to reverse each individual word, while keeping the word order the same.
// Input:
// I love programming
// Output:
// I evol gnimmargorp
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int start = 0;
    cout << "ENTER THE STRING : ";
    getline(cin, s);
    for (int i = 0; i <= s.length(); i++)
    {
        int j = i - 1;
        if (s[i] == ' ' || i == s.length())
        {
            while (start < j)
            {
                int temp = s[start];
                s[start] = s[j];
                s[j] = temp;
                start++;
                j--;
            }
            start = i + 1;
        }
    }
    cout << s;
    return 0;
}