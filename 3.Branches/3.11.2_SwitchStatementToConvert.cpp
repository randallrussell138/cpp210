#include <iostream>
using namespace std;

int main() {
   char origLetter;

   cin >> origLetter;

   
   /* Solution Beginning */

   switch (origLetter){
   case 'A':
   case 'a':
   	cout << "Alpha" << endl;
  	 break;
   
   case 'B':
   case 'b':
  	 cout << "Beta" << endl;
  	 break;
   
   default:
   	 cout << "Unknown" << endl;
  	 break;
   }

   /* Solution End */


   return 0;
}
