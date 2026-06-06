// Basic String Operations
// Input string (cin, getline)
// Output string
// String length
// Access characters using index
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int count = 0;
    // input/output .
    cout << "ENTER THE NAME : ";
    // cin >> str;
    getline(cin, str);
    cout << endl
         << "MY NAME IS : " << str << endl;
    // To give string length .
    for (int i = 0; i < str.length(); i++)
    {
        count++;
    }
    cout << count << endl;
    // or
    cout << str.length() << endl;
    // Access characters using index
    // cout << str.at(2);
    if (str.length() > 2)
    {
        cout << str[2];
    }
    else
    {
        cout<<"Index doesn't exits : ";
    }
    return 0;
}