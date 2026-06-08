// Concatenate Two Strings
// Kush
// Sahu
// Output: KushSahu
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1, str2, str3;
    cout << "ENTER THE STRING NUMBER 1 : ";
    getline(cin, str1);
    cout << "ENTER THE STRING NUMBER 2 : ";
    getline(cin, str2);
    str3 = str1 + str2;
    cout << str3;
    return 0;
}