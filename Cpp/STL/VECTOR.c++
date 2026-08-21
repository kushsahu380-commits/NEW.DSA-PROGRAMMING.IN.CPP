// VECTORS .
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v(5);
    // v.emplace_back(4);
    // emplace_back():
    //  Inserts a new element at the end (back) of the vector.
    //  Increases the vector's size by 1.
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cin >> *(it); // {20,10,15,5,7};
    }
    // it --> It is the iterator pointing the address of the elements stored in memory .
    // v.begin(); --> It is a iterator pointing to first element of the vector.
    // v.end(); --> It is a iterator pointing to one position after the last element of the vector.
    // *(it) -->It gives the value of the address where iterator is pointing .
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    //  {20,10,15,5,7};
    // Deletion in vector .
    v.erase(v.begin() + 2);
    for (auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    return 0;
}