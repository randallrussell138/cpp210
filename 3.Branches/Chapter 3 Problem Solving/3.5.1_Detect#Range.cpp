#include <iostream>
using namespace std;

int main() {
   int userAge;

   cin >> userAge;

	/*Solution Inside if parenthesis*/
   if ((userAge > 17) && (userAge <= 25)) {
      cout << "Eligible" << endl;
   }
   else {
      cout << "Ineligible" << endl;
   }

   return 0;
}
