#include <iostream>

using namespace std;

double covert_cm_to_inches(double cm, double& inch);

int main()
{
   double inch;
   double cm;
   while(cin >> cm)
   {
      covert_cm_to_inches(cm, inch);
      cout << cm << "cm = " << inch << " in" << endl;
   }
   return 0;
}

double covert_cm_to_inches(double cm, double& inch)
{
   inch = cm * 2.54;
}
