#include <bits/stdc++.h>
using namespace std;
class student
{
public:
    string name = "Rocky Chowdhury";
    string ID = "0282220005101021";
    double result = 3.33;
    void print()
    {
        cout << name << endl;
        cout << ID << endl;
        cout << result << endl;
    }
};
int main()
{
    student rocky;
    rocky.print();
    return 0;
}