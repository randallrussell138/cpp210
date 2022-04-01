// All Solution

#include <iostream>
using namespace std;

int main() {

   int dollar;
   int qu;
   int di;
   int ni;
   int pe;
   int userInput;
      
   cin >> userInput;
   
   
   if (userInput == 0){
      cout << "No change" << endl;
   }else {
   
   dollar = userInput / 100;
      userInput = userInput - (dollar*100);      
   if(dollar == 0){
      
   }else{
   cout << dollar;    
   if(dollar > 1){
      cout << " Dollars" << endl;
   }else{
      cout << " Dollar" << endl;
   }
   }
   
   
   qu = userInput / 25;
      userInput = userInput - (qu *25);      
   if(qu == 0){
      
   }else{
   cout << qu;    
   if(qu > 1){
      cout << " Quarters" << endl;
   }else{
      cout << " Quarter" << endl;
   }
   }
   
   
   di = userInput / 10;
      userInput = userInput - (di *10);
   if(di == 0){
      
   }else{
   cout << di;    
   if(di > 1){
      cout << " Dimes" << endl;
   }else{
      cout << " Dime" << endl;
   }
   }
   
   ni = userInput / 5;
      userInput = userInput - (ni *5);
   if(ni == 0){
      
   }else{
   cout << ni;    
   
   if(ni > 1){
      cout << " Nickels" << endl;
   }else{
      cout << " Nickel" << endl;
   }
   }
   
   pe = userInput / 1;
   if(pe == 0){
      
   }else{
   cout << pe;
   
   if(pe > 1){
      cout << " Pennies" << endl;
   }else{
      cout << " Penny" << endl;
   }
   }
   
   }
   
   return 0;
}
