#include <iostream>
using namespace std;

int main() {
   int numInsects;

   cin >> numInsects; // Must be >= 1

  /* Solution Beginning */
  
  while (numInsects < 200){
     cout << numInsects << " ";
     numInsects = numInsects *2;
  }
  cout << endl;
  
  /* Solution End */


   return 0;
}
