#include <iostream>

using namespace std;
const int MAX = 5;

//�tf�ri� fallak�llin fyrir make_x, make_o, move_o og output

int main()
{
    //b�i� til tv�falt char fylki (arr)
    //b�i� til tv�r int breytur a og b
    //kalli� � f�llin � eftirfarandi r��:
    //make_x, make_o, output, move_o

    return 0;
}

void make_x(char arr[][MAX])
{
    //Setji� x allsta�ar
}

void make_o(char arr[][MAX], int& x, int& y)
{
    //Setja o � reit 0 0
}

void move_o(char arr[][MAX], int& x, int& y)
{
    char moveo;
    char user_says;
    do
        {
        cout << "Where would you like to move o? " << endl;
        cout << "| r - right l - left u - up d - down |" << endl;
        cin >> moveo;
        cout << endl;

        if(moveo == 'r')
        {
            if (y == 4)
            {
                //f�ra o lengst til vinstri
            }
            else
            {
                //f�ra o til h�gri
            }
        }

        else if(moveo == 'l')
        {
            if (y == 0)
            {
                //f�ra o lengst til h�gri
            }
            else
            {
                //f�ra o til vinstri
            }
        }

        else if(moveo == 'u')
        {
            if (x == 0)
            {
                //f�ra o lengst ni�ur
            }
            else
            {
                //f�ra o upp
            }
        }

        else if(moveo == 'd')
        {
            if (x == 4)
            {
                //f�ra o alveg upp
            }
            else
            {
                //f�ra o ni�ur
            }
        }

        output(arr, x, y);
        cout << "Would you like to continue? (y/Y)";
        cin >> user_says;

        }while(user_says == 'y'||user_says == 'Y');
}

void output(char arr[][MAX], int x, int y)
{
    //prenta �t fylki�
    //� byrjun er �a�:

    /*
       o x x x x
       x x x x x
       x x x x x
       x x x x x
       x x x x x
    */
}
