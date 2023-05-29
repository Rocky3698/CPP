#include <bits/stdc++.h>
using namespace std;
class Bank
{
private:
    string bank_id;
    string bank_name;
    string location;

public:
    Bank(string bi, string bn)
    {
        bank_id = bi;
        bank_name = bn;
    }

    void print()
    {
        cout << bank_id << " " << bank_name << endl;
    }
};

class Customer : public Bank
{
private:
    string c_id;
    string c_amm;
    // string location;
public:
    Customer(string ci, string ca, string id, string d) : Bank(id, d)
    {
        c_id = ci;
        c_amm = ca;
    }

    void print()
    {
        cout << c_id << " " << c_amm << endl;
    }
};

int main()
{
    Customer obj("akkas", "100", "123213", "222");
    obj.Bank::print();
}
