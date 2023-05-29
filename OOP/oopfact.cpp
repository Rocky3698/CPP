#include <iostream>
using namespace std;

class Factorial
{
private:
    int num;

public:
    Factorial(int n)
    {
        num = n;
    }
    int calculate()
    {
        int result = 1;
        for (int i = 1; i <= num; i++)
        {
            result = result * i;
        }
        return result;
    }
};

int main()
{
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0)
    {
        cout << "Error: Number must be positive." << endl;
        return 1;
    }

    Factorial fact(n);
    int result = fact.calculate();

    cout << "The factorial of " << n << " is " << result << endl;

    return 0;
}

