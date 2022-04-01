#include <iostream>
using namespace std;

int main() {
   int userNum;

   cin >> userNum;

   
   /* Solution Beginning */

   	if (userNum > 0){
  		cout << "Positive." << endl;
	}else{
   		cout << "Not positive, converting to 1." << endl;
   		userNum = 1;
	}
	cout << "Final: " << userNum << endl;

   /* Solution End */


   return 0;
}
