#include <iostream>

using namespace std;

int main()
{
    int tala;

    while(tala != 42) {
        cin >> tala;
    }

    if(tala == 42)
    {
        cout << "The answer to life, the universe and everything is " << tala << "!" << endl;
    }

    return 0;
}
