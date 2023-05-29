#include <iostream>
using namespace std;
int main()
{
    int quantity;
    int price; 
    cin >> quantity;
    price = quantity * 100; // per unit is tk 100
    // discount condition is price>1000
    if (price > 1000)
    {
        cout << price - (price * .1) << endl;
    }

    else
        cout << price << endl;

    return 0;
}