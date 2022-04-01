#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
   double sphereVolume;
   double sphereRadius;

   cin >> sphereRadius;

   /* Solution Beginning */

   sphereVolume = (4.0 / 3.0) * M_PI * (sphereRadius * sphereRadius * sphereRadius);

   /* Solution End */


   cout << fixed << setprecision(2) << sphereVolume << endl;

   return 0;
}