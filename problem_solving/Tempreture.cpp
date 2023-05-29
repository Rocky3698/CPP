#include <iostream>
using namespace std;
int main()
{
    double c, f, k;
    char punit, cunit;
    cout << "Enter present unit of temperature" << endl
         << "C for celcious" << endl
         << "F for farenhite" << endl
         << "K for kelvin" << endl;

    while (true)
    {
        cin >> punit;

        if (punit == 'C' || punit == 'c')
        {
            cout << "Enter the Tempreture" << endl;

            cin >> c;
            cout << "Enter Coversion form F or K " << endl;
            cin >> cunit;
            if (cunit == 'F' || cunit == 'f')
            {
                f = 1.8 * c + 32;
                cout << "F = " << f << endl;
            }
            else if (cunit == 'K' || cunit == 'k')
            {
                k = c + 273;
                cout << "K = " << k << endl;
            }

            break;
        }
        else if (punit == 'F' || punit == 'f')
        {
            cout << "Enter the Tempreture" << endl;
            cin >> f;
            cout << "Enter Coversion form C or K " << endl;
            cin >> cunit;
            if (cunit == 'K' || cunit == 'k')
            {
                k = 5 * (f - 32) / 9 + 273;
                cout << "K = " << k << endl;
            }
            else if (cunit == 'C' || cunit == 'c')
            {
                c = (f - 32) * (5 / 9);
                cout << "C = " << c << endl;
            }
            break;
        }
        else if (punit == 'K' || punit == 'k')
        {
            cout << "Enter the Tempreture" << endl;
            cin >> k;
            cout << "Enter Coversion form F or C " << endl;
            cin >> cunit;
            if (cunit == 'C' || cunit == 'c')
            {
                c = k - 273;
                cout << "C = " << c << endl;
            }
            else if (cunit == 'F' || cunit == 'f')
            {
                f = ((k - 273) * 9 / 5) + 32;
                cout << "F = " << f << endl;
            }
            break;
        }
        else
            cout << "Please Enter unit as form of C, F or K" << endl;
    }

    return 0;
}
