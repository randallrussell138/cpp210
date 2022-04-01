#include <iostream>
#include <cstdlib>   // Enables use of rand()
using namespace std;

int main() {
   int seedVal;

   cin >> seedVal;

   
   /* Solution Beginning */

   srand(seedVal);
   
   cout << rand() % 10 << endl;
   
   cout << rand() % 10 << endl;

   /* Solution End */


   return 0;
}