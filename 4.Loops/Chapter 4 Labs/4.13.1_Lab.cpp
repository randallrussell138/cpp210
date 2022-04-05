//All Solution
#include <iostream>
using namespace std;

int main() {
   
   int i;
   string userInput;

   getline(cin, userInput);
   
   while(userInput != "Done" && userInput != "done" && userInput != "d"){
      for(i = userInput.length()-1; i>=0; --i){
         cout << userInput.at(i);
      }
      cout << endl;
      getline(cin, userInput);
   }

   return 0;
}

