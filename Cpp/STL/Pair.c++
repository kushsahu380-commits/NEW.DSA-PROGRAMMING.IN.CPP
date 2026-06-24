#include <bits/stdc++.h>
using namespace std;
int main()
{
    pair<int, int> p;
    p = {1, 2};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> q;
    q = {1, {3, 6}};
    cout << q.second.second << endl;
    pair<int, char> arr[] = {{1, 'a'}, {2, 'b'}, {3, 'c'}};
    cout << arr[1].second << endl;
    return 0;
}