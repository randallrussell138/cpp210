#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 5;
   vector<int> runTimes(NUM_VALS);
   unsigned int i;

   // Populate vector
   for (i = 0; i < runTimes.size(); ++i) {
      cin >> runTimes.at(i);
   }

  /* Solution Beginning */
  
  for(i = 0; i < 3; ++i) {
      cout << runTimes.at(i) << endl;
   }

  /* Solution End */

   return 0;
}
