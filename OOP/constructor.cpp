#include <bits/stdc++.h>
using namespace std;
class constructor
{
public:
    int count = 0;
    constructor()
    {
        cout << "This is a default Constructor" << endl;
        count++;
    }
    constructor(int a)
    {
        cout << "This is second Constructor" << endl;
        count += a;
    }
    constructor(int a, int b)
    {
        cout << "This is the third constructor" << endl;
        count += a * b;
    }
};
int main()
{

    constructor obj;           // default constructor is called;
    constructor obj1(10,20);  // second constructor is called;
    constructor obj2(10);    // thired constructor is called;

    return 0;
}