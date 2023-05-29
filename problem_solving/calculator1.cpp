#include <bits/stdc++.h>
using namespace std;
int main()
{
    while (true)
    {
        cout << "What you want to do?" << endl;
        cout << "Enter '+' for Add \nEnter '-' for Subtract\nEnter '*' for Multiply\nEnter '/' for Divide\nEnter '%' for Percentage\nEnter 0 for Exit" << endl;
        char mode;
        double result = 0, n;
        int num;
        cin >> mode;
        if (mode == '0')
            break;
        switch (mode)
        {
        case '+':

            cout << "Enter how many number you want to add" << endl;
            cin >> num;
            cout << "Enter numbers" << endl;

            while (num--)
            {
                cin >> n;
                result += n;
            }
            cout << "sum= " << result << endl;

            break;
        case '-':
            result = 0;
            cout << "Enter the substraction" << endl;
            cin >> result;
            cout << "Enter how many subtractive you have" << endl;
            cin >> num;
            cout << "Enter subtractives" << endl;
            while (num--)
            {
                cin >> n;
                result -= n;
            }
            cout << "Subtraction= " << result << endl;
            break;

        case '*':
            result = 1;
            cout << "Enter how many number you want to multiply" << endl;
            cin >> num;
            cout << "Enter multipliers" << endl;
            while (num--)
            {
                cin >> n;
                result *= n;
            }
            cout << "Product= " << result << endl;
            break;
        case '/':
            double num1, num2;
            cout << "Enter dividen" << endl;
            cin >> num1;
            cout << "Enter divisor" << endl;
            cin >> num2;
            cout << "Quotient= " << num1 / num2 << endl;

            break;
        case '%':
            double n1, n2;
            cout << "Enter total number" << endl;
            cin >> n1;
            cout << "How many percentage you want to know" << endl;
            cin >> n2;
            cout << "percentage= " << n1 * n2 / 100 << "%" << endl;

            break;

        default:

            cout << "Error! Something was wrong." << endl
                 << endl;

            break;
        }
    }

    return 0;
}
        // case 1:
        //     // basic calculation
        //     cout << "Enter '+' for Add \nEnter '-' for Subtract\nEnter '*' for Multiply\nEnter '/' for Divide\nEnter '%' for Percent" << endl;
        //     char mode;
        //     cin >> mode;
        //     switch (mode)
        //     {
        //     case '+':
        //         double num1, num2;
        //         cout << "Enter two number to add" << endl;
        //         cin >> num1 >> num2;
        //         cout << num1 + num2 << endl;

        //         break;
        //     case '-':
        //         double num3, num4;
        //         cout << "Enter two number to Subtract" << endl;
        //         cin >> num3 >> num4;
        //         cout << num3 - num4 << endl;

        //         break;
        //     case '*':
        //         double num5, num6;
        //         cout << "Enter two number to Miltiply" << endl;
        //         cin >> num5 >> num6;
        //         cout << num5 * num6 << endl;

        //         break;
        //     case '/':
        //         double num7, num8;
        //         cout << "Enter two number to Divide" << endl;
        //         cin >> num7 >> num8;
        //         cout << num7 / num8 << endl;

        //         break;
        //     case '%':
        //         double n1, n2;
        //         cout << "Enter total number" << endl;
        //         cin >> n1;
        //         cout << "How many percentage you want to know" << endl;
        //         cin >> n2;
        //         cout << n1 * n2 / 100 << endl;

        //         break;

        //     default:
        //         break;
        //     }

        //     break;