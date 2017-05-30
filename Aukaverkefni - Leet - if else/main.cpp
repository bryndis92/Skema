#include <iostream>

using namespace std;

int main()
{
   int tala;

   cout << "Write the leetspeak number also known as eleet!" << endl;
   cin >> tala;

   if (tala == 1337)
   {
      cout << "We're leet, baby!";
   }
   else if (tala != 1337)
   {
      cout << tala << " is not the number for leet!" << endl;
   }
   return 0;
}
