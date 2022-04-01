#include <iostream>
#include <string>
using namespace std;

int main() {
   string firstString;
   string secondString;

   cin >> firstString;
   cin >> secondString;

   
   /* Solution Beginning */

   if(secondString < firstString){
		cout << secondString << " " << firstString << endl;
	}

	else{
		cout << firstString << " " << secondString << endl;
	}
   

   /* Solution End */


   return 0;
}
