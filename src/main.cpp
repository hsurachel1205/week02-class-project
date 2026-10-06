#include <iostream>
using namespace std;

int main()
{
    double volts, ohms;
    if (!(cin >> volts >> ohms) || ohms <= 0)
    {
        cout << "Invalid input\n";
        return 0;
    }
    cout << "Current: " << volts / ohms << " A\n";
}