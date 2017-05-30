#include <iostream>

using namespace std;

bool equals(int number1, int number2)
{
   if(number1 == number2)
   {
      return true;
   }
   return false;
}

bool larger(int number1, int number2)
{
   if(number1 > number2)
   {
      return true;
   }
   return false;
}

bool smaller(int number1, int number2) {
   if(number1 < number2)
   {
      return true;
   }
   return false;
}

int main()
{
   int number1;
   int number2;
   cin >> number1;
   cin >> number2;

   if(equals(number1, number2))
   {
      cout << "They are even";
   }
   else if(larger(number1, number2))
   {
      cout << number1 << " is greater than " << number2;
   }
   else if(smaller(number1, number2))
   {
      cout << number1 << " is less than " << number2;
   }

   return 0;
}

