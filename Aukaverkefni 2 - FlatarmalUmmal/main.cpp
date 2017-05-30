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

    //Til að reikna flatarmál
    cout << "Flatarmalid er: " << lengd * breidd << endl;

    //Til að reikna ummál
    cout << "Ummalid er: " << (lengd * 2) + (breidd * 2) << endl;
}
