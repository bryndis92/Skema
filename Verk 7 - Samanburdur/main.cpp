#include <iostream>

using namespace std;

int main()
{
   int tala1;
   int tala2;

   cin >> tala1;
   cin >> tala2;

   if(tala1 > tala2)
   {
      cout << tala1 << " er staerri en " << tala2 << endl;
   }
   else if (tala1 == tala2)
   {
      cout << tala1 << " og " << tala2 << " eru jafnhaar" << endl;
   }
   else if (tala1 < tala2)
   {
      cout << tala2 << " er staerri en " << tala1 << endl;
   }

   return 0;
}
