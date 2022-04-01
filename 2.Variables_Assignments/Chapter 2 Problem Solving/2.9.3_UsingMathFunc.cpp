#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x1;
   double y1;
   double x2;
   double y2;
   double xDist;
   double yDist;
   double pointsDistance;

   xDist = 0.0;
   yDist = 0.0;
   pointsDistance = 0.0;

   cin >> x1;
   cin >> y1;
   cin >> x2;
   cin >> y2;


   /* Solution Beginning */

   double temp1 = pow ((x2 - x1) , 2); 
   double temp2 = pow ((y2 - y1) , 2);
   pointsDistance = sqrt(temp1 + temp2);

   /* Solution End */

   cout << pointsDistance << endl;

   return 0;
}