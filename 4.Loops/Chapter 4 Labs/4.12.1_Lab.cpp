// All Solution
#include <iostream>
using namespace std;

int main() {

   /* Type your code here. */
   
   int num1;
   int num2;
   int i;
   
   cin >> num1;
   cin >> num2;
   if (num2 < num1){
      cout << "Second integer can't be less than the first." << endl;
   }else{
      for (i = num1; i <= num2; i=i+5){
         cout << i << " ";
      }
      cout << endl;
   }

   return 0;
}

