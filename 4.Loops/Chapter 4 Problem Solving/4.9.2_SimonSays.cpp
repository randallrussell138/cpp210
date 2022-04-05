#include <iostream>
#include <string>
using namespace std;

int main() {
   string simonPattern;
   string userPattern;
   int userScore;
   int i;

   userScore = 0;

   cin >> simonPattern;
   cin >> userPattern;

  /* Solution Beginning */
  
  
	for(i = 0;i<10;i++){
      if(simonPattern[i]==userPattern[i]){
         userScore++;
      }
      else{
       break;
     }
   }

  /* Solution End */

   cout << "userScore: " << userScore << endl;

   return 0;
}
