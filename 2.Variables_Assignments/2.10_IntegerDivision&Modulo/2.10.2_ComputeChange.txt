#include <iostream>
using namespace std;

int main() {
   int amountToChange;
   int numFives;
   int numOnes;

   cin >> amountToChange;
   numFives = amountToChange / 5;

   /* Solution Beginning*/

   numOnes = amountToChange - (numFives * 5);

   /* Solution End */

   cout << "numFives: " << numFives << endl;
   cout << "numOnes: " << numOnes << endl;

   return 0;
}