#include <iostream>
using namespace std;

int main() {
   int numDrinks;
   int numTacos;
   int totalCost;

   cin >> numDrinks;
   cin >> numTacos;

   /* Solution Beginning */

   totalCost = (2 * numDrinks) + (4 * numTacos);

   /* Solution End */

   cout << "Total cost: " << totalCost << endl;

   return 0;
}