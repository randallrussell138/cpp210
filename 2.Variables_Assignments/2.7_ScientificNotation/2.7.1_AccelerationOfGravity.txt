#include <iostream>
using namespace std;

int main() {
   double G = 6.673e-11;
   double M = 5.98e24;
   double accelGravity;
   double distCenter;

   cin >> distCenter;

   /* Solution Beginning */

   accelGravity = (G * M) / (distCenter * distCenter);

   /* Solution End */

   cout << accelGravity << endl;

   return 0;
}