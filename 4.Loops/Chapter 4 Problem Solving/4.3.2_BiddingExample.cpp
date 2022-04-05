#include <iostream>
using namespace std;

int main() {
   char keepBidding;
   int nextBid;

   nextBid = 0;
   keepBidding = 'y';


    //Solution In Parenthesis
   while (keepBidding != 'n') {
      nextBid = nextBid + 3;
      cout << "I'll bid $" << nextBid << "!" << endl;
      cout << "Continue bidding? (y/n) ";
      cin >> keepBidding;
   }
   cout << endl;

   return 0;
}
