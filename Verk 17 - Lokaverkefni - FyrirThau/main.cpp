#include <iostream>

using namespace std;
const int MAX = 5;

//Útfærið fallaköllin fyrir make_x, make_o, move_o og output

int main()
{
    //búið til tvöfalt char fylki (arr)
    //búið til tvær int breytur a og b
    //kallið á föllin í eftirfarandi röð:
    //make_x, make_o, output, move_o

    return 0;
}

void make_x(char arr[][MAX])
{
    //Setjið x allstaðar
}

void make_o(char arr[][MAX], int& x, int& y)
{
    //Setja o í reit 0 0
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
                //færa o lengst til vinstri
            }
            else
            {
                //færa o til hægri
            }
        }

        else if(moveo == 'l')
        {
            if (y == 0)
            {
                //færa o lengst til hægri
            }
            else
            {
                //færa o til vinstri
            }
        }

        else if(moveo == 'u')
        {
            if (x == 0)
            {
                //færa o lengst niður
            }
            else
            {
                //færa o upp
            }
        }

        else if(moveo == 'd')
        {
            if (x == 4)
            {
                //færa o alveg upp
            }
            else
            {
                //færa o niður
            }
        }

        output(arr, x, y);
        cout << "Would you like to continue? (y/Y)";
        cin >> user_says;

        }while(user_says == 'y'||user_says == 'Y');
}

void output(char arr[][MAX], int x, int y)
{
    //prenta út fylkið
    //í byrjun er það:

    /*
       o x x x x
       x x x x x
       x x x x x
       x x x x x
       x x x x x
    */
}
