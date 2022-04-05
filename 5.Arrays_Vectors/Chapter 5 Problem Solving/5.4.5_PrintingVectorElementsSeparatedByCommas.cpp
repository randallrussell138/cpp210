#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   unsigned int i;
   vector<int> hourlyTemp(NUM_VALS);

   for (i = 0; i < hourlyTemp.size(); ++i) {
      cin >> hourlyTemp.at(i);
   }

  /* Solution Beginning */
  
  for (i = 0; i < hourlyTemp.size(); ++i){
      if(i == hourlyTemp.size()-1){
         cout << hourlyTemp.at(i);
      }else{
         cout << hourlyTemp.at(i) << ", " ;  
      }
   }

  /* Solution End */

   cout << endl;

   return 0;
}
