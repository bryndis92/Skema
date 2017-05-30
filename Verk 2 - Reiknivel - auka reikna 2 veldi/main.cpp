#include <iostream>

using namespace std;

int main()
{
   int tala1 = 0;
   int tala2 = 0;
   int svar = 0;

   cout << "Sladu inn tvaer tolur:" << endl;
   cin >> tala1;
   cin >> tala2;

   svar = tala1 + tala2;
   cout << tala1 << "+" << tala2 << " = " << svar << endl;

   svar = tala1 * tala2;
   cout << tala1 << "*" << tala2 << " = " << svar << endl;

   //Fradrattur
   svar = tala1 - tala2;
   cout << tala1 << "-" << tala2 << " = " << svar << endl;

   //Deiling
   svar = tala1 / tala2;
   cout << tala1 << "/" << tala2 << " = " << svar << endl;

   //Modulus
   svar = tala1 % tala2;
   cout << tala1 << "%" << tala2 << " = " << svar << endl;

   //Annad veldi af tölu 1
   svar = tala1 * tala1;
   cout << tala1 << "^2" << " = " << svar << endl;

   //Annad veldi af tölu 2
   svar = tala2 * tala2;
   cout << tala2 << "^2" << " = " <<  svar << endl;

   return 0;
}
