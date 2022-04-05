#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

  /* Solution Beginning */
  
   while (userNum > 2) {
     userNum = userNum/4;
     cout << userNum << " "; 
   }

  /* Solution End */
  
   cout << endl;

   return 0;
}
