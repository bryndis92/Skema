#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int positive = 0;
    int negative = 0;
    int number = 0;
    for(int i = 1; i <= 10 ; i++)
    {
        cin >> number;

        if(number > 0)
        {
            positive++;
            sum = sum + number;
        }
        else if(number <=0)
        {
            negative++;
        }
    }
        cout << sum << endl;
        cout << positive << endl;
        cout << negative << endl;

    return 0;
}
