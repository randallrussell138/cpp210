#include <iostream>
#include <string>
using namespace std;

int main() {
   string userString;

   cin >> userString;

   
   /* Solution Beginning */

   if (userString == "Quit"){
     cout << "Goodbye" << endl; 
   }else{
      cout << "Hello" << endl;
   }   

   /* Solution End */


   return 0;
}
