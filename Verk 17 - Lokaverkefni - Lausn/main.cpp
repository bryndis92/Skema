#include <iostream>

using namespace std;
const int MAX = 5;

void make_x(char arr[][MAX]);
void make_o(char arr[][MAX], int& x, int& y);
void move_o(char arr[][MAX], int& x, int& y);
void output(char arr[][MAX], int x, int y);

int main()
{
    char arr[MAX][MAX];
    int x, y;
    //kalla á föllin í eftirfarandi röð:
    //make_x, make_o, output, move_o
    make_x(arr);
    make_o(arr, x, y);
    output(arr, x, y);
    move_o(arr, x, y);




    return 0;
}

void make_x(char arr[][MAX])
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            arr[i][j] = 'x';
        }
    }
    //Setja x allstaðar
}

void make_o(char arr[][MAX], int& x, int& y)
{
    x = 0;
    y = 0;
    arr[x][y] = 'o';
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
                arr[x][y-4] = arr[x][y];
                arr[x][y] = 'x';
                y = y - 4;
            }
            else
            {
                arr[x][y+1] = arr[x][y];
                arr[x][y] = 'x';
                y = y + 1;
            }
        }

        else if(moveo == 'l')
        {
            if (y == 0)
            {
                arr[x][y+4] = arr[x][y];
                arr[x][y] = 'x';
                y = y + 4;
            }
            else
            {
                arr[x][y-1] = arr[x][y];
                arr[x][y] = 'x';
                y = y - 1;
            }
        }

        else if(moveo == 'u')
        {
            if (x == 0)
            {
                arr[x+4][y] = arr[x][y];
                arr[x][y] = 'x';
                x = x + 4;
            }
            else
            {
                arr[x-1][y] = arr[x][y];
                arr[x][y] = 'x';
                x = x - 1;
            }
        }

        else if(moveo == 'd')
        {
            if (x == 4)
            {
                arr[x-4][y] = arr[x][y];
                arr[x][y] = 'x';
                x = x - 4;
            }
            else
            {
                arr[x+1][y] = arr[x][y];
                arr[x][y] = 'x';
                x = x + 1;
            }
        }

        output(arr, x, y);
        cout << "Would you like to continue? (y/Y)";
        cin >> user_says;

        }while(user_says == 'y'||user_says == 'Y');
}

void output(char arr[][MAX], int x, int y)
{
    for(int i = 0; i < MAX; i++)
    {
        for(int j = 0; j < MAX; j++)
        {
            cout << arr[i][j] < " ";
        }
        cout << endl;
    }
    cout << endl;
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
