#include <iostream>

using namespace std;

int main()
{
   int n = 0;
   int input = 0;
   int counter = 0;
   cin >> n;

   int arr[n];

   for(int i = 0; i < n; i++)
   {
      cin >> arr[i];
   }

   cout << "Choose a number: " << endl;

   cin >> input;

   for(int i = 0; i < n; i++)
   {
      if(input == arr[i])
      {
          counter++;
      }
   }

   if(counter != 0)
   {
      cout << "It exists " << counter << " times in the array." << endl;
   }

   else
   {
       cout << "This number does not exist in the array." << endl;
   }

   return 0;
}
