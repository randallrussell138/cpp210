#include <iostream>
using namespace std;

int main() {
   char a;
   char b;
   char c;

   cin >> a;
   cin >> b;
   cin >> c;
   
   /* Solution Beginning */

   cout << a << b << c <<" "<< a << c << b <<" "<< b << a << c <<" "<< b << c << a <<" "<< c << a << b <<" "<< c << b << a;

   /* Solution End */


   cout << endl;

   return 0;
}