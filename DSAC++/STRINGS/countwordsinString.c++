// Count Words in a Sentence
// Input:
// Kush Kumar Sahu
// Output:
// 3
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0, words;
    cout << "ENTER THE NUMBER : ";
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }
    words = count + 1;
    cout << "WORDS IN THE GIVEN SENTENCE IS : " << words;
    return 0;
}