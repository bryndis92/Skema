#include <iostream>

using namespace std;

int main()
{
   int number;

   cin >> number;

   for(int i = 1; i <= number; i++)
   {
      cout << i;
      if(i % 3 == 0)
      {
         cout << " Amazing!" << endl;
      }
      else if(i % 5 == 0)
      {
         cout << " Fantastic! " << endl;
      }
      else
      {
         cout << endl;
      }
   }
   return 0;
}

