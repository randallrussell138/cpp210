#include <iostream>
using namespace std;

int main() {
   int nextChoice;

   cin >> nextChoice;

   
   /* Solution Beginning */

   if (nextChoice == 0){
     cout << "Rock" << endl; 
   }else if (nextChoice == 1){
      cout << "Paper" << endl;
   }else if (nextChoice == 2){
      cout << "Scissors" << endl;
   }else{
      cout << "Unknown" << endl;   
   }

   /* Solution End */


   return 0;
}
