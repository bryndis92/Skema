#include <iostream>

using namespace std;

const int MAX = 5;

int main()
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            cout << 'x' << " ";
        }
        cout << endl;
    }
    return 0;
}
