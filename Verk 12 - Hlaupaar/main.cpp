#include <iostream>

using namespace std;

bool is_leap_year(int year)
{
   if((year % 4 == 0 && !(year % 100 == 0)) || year % 400 == 0)
   {
      return true;
   }
   else
   {
      return false;
   }
}

int main()
{
   int year;

   while(cin >> year)
   {
      if(is_leap_year(year))
      {
         cout << year << " is a leap year" << endl;
      }
      else
      {
         cout << year << " is not a leap year" << endl;
      }
   }
   return 0;
}

