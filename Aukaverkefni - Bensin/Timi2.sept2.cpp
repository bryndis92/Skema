#include <iostream>

using namespace std;

int main()
{
    double fuel_gage_reading = 0.15;

    if (fuel_gage_reading < 0.75)
    {
        if (fuel_gage_reading < 0.25)
        cout << "fuel very low. Caution!\n";
    }

    else
        cout << "Fuel over 3/4. Don't stop now!\n";

    return 0;
}
