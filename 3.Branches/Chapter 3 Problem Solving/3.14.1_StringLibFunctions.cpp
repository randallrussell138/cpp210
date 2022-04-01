#include <iostream>
#include <string>
using namespace std;

int main() {
   string userInput;
   int stringSize;

   getline(cin, userInput);

   
   /* Solution Beginning */

   stringSize = userInput.size();

   /* Solution End */


   cout << "Size of userInput: " << stringSize << endl;

   return 0;
}
