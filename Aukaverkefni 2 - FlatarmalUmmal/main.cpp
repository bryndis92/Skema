#include <iostream>

using namespace std;

int main()
{
    int lengd = 0;
    int breidd = 0;

    cout << "Lengd: ";
    cin >> lengd;

    cout << "Breidd: ";
    cin >> breidd;

    //Til a� reikna flatarm�l
    cout << "Flatarmalid er: " << lengd * breidd << endl;

    //Til a� reikna umm�l
    cout << "Ummalid er: " << (lengd * 2) + (breidd * 2) << endl;
}
