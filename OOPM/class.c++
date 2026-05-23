#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    int cls;
    string name;
    float percent;

public:
    void get_info(int a, string b, float c);
    void put_info();
};
void student::put_info()
{
    cout << "NAME OF STUDENT : " << name << endl;
    cout << "CLASS OF STUDENT : " << cls << "th" << endl;
    cout << "PERCENT OF STUDENT : " << percent << "%";
}
void student::get_info(int a, string b, float c)
{
    name = b;
    percent = c;
    cls = a;
}
int main()
{
    student x;
    x.get_info(12, "KUSH", 75.4);
    x.put_info();
    return 0;
}