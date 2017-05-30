#include <iostream>
#include <vector>
using namespace std;

const int MAX = 10;

int main()
{
    int number = 0;
    vector<int> v;

    for(int i = 0; i < MAX; i++)
    {
        cin >> number;
        v.push_back(number);
    }

    for(int i = 0; i < MAX; i++)
    {
        cout << v[i];
    }
    return 0;
}
