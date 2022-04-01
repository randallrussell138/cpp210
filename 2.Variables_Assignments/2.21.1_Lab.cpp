//All Solution

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int num1;
   int num2;
   int num3;
   int num4;

   //getting 4 nums from user
   cin >> num1;
   cin >> num2;
   cin >> num3;
   cin >> num4;

   // Ans without decimals
   cout << num1 * num2 * num3 * num4;
   cout << " " << (num1 + num2 + num3 + num4) / 4 << endl;
   
   //set decimal points
   cout << fixed << setprecision(3);
   
   //Ans with decimals
   cout << ((double) num1) * num2 * num3 * num4;
   cout << " " << ( num1 + num2 + num3 + num4) / 4.0 << endl;
 
   return 0;
}