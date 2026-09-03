// Q17. Find the most frequent character
// Input:  hello
// Output: l
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int pre = 0, index;
    cout << "ENTER THE STRING :";
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        int count = 1;
        for (int j = i + 1; j < s.length(); j++)
        {
            if (s[i] == s[j])
            {
                count++;
            }
        }
        if (count > pre)
        {
            pre = count;
            index = i;
        }
    }
    cout << "ALL CHARCTERS ARE OF SAME FREQUENCY : " << s[index] << "--> " << pre;
    return 0;
}