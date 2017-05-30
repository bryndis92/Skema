#include <iostream>
using namespace std;

const int MAX = 10;

void input(char arr[], int &counter);
void output(char arr[], int counter);

int main()
{
    char arr[MAX];
    int counter = 0;
    input(arr, counter);
    output(arr, counter);

    return 0;
}

void input(char arr[], int &counter)
{
    for(int i = 0 ; i < MAX ; i++)
    {
        cin >> arr[i];
        if(arr[i] == '.')
        {
            break;
        }
        counter++;
    }
}
void output(char arr[], int counter)
{
    for(int i = (counter-1) ; i >= 0 ; i--)
    {
        cout << arr[i] << " ";
    }
}
