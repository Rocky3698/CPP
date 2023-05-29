#include <bits/stdc++.h>
using namespace std;
int a = 10;
class destructors
{
public:
    // member funtion
    int *a;
    void memfunc()
    {
        cout << "This is a member function" << endl;
        a--;
    }
    ~destructors()
    {
        cout << "Distructor is called" << endl;
        delete[] a;
        cout << a << endl;
    }
};
int main()
{
    destructors obj;
    obj.memfunc();

    return 0;
}