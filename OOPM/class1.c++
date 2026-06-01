#include <iostream>
using namespace std;
class student
{
private:
    string name;
    int cls;
    float cgpa;

public:
    void get_student(string, int, float);
    void put_student(void);
};
void student ::get_student(string x, int y, float z)
{
    name = x;
    cls = y;
    cgpa = z;
}
void student ::put_student(void)
{
    cout << "NAME : " << name<<endl;
    cout << "CLASS :" << cls<<endl;
    cout << "CGPA :" << cgpa<<endl;
}
int main()
{
    student a1;
    a1.get_student("KUSH", 80, 8.8);
    a1.put_student();
    return 0;
}