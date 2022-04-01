#include <iostream>
using namespace std;

int main() {
   bool isTeenager;
   int kidAge;

   cin >> kidAge;

   
   /* Solution Beginning */
   
   if ((kidAge >= 13) && (kidAge <= 19)){
      isTeenager = true;
   }else{
      isTeenager = false;
   }

   /* Solution End */


   if (isTeenager) {
      cout << "Teen" << endl;
   }
   else {
      cout << "Not teen" << endl;
   }

   return 0;
}
