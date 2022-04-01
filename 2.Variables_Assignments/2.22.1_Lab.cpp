//All Solution

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   double x;
   double y;
   double z;

// gets x,y,z from the user   
   cin >> x;
   cin >> y;
   cin >> z;
   
//outputs values from the expression * forgot end line on 1st submission
   cout << pow(x,z) << " " << pow(x,pow(y,z)) << " " << fabs(y) << " " << sqrt(pow((x*y),z)) << endl;
   
   return 0;
}
