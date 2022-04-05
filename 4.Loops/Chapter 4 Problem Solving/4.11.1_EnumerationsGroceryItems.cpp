#include <iostream>
using namespace std;

int main() {
   enum GroceryItem {GR_APPLES, GR_BANANAS, GR_JUICE, GR_WATER};
   GroceryItem userItem;

   userItem = GR_APPLES;

  /* Solution Beginning */
  
   if(userItem == GR_APPLES || userItem == GR_BANANAS){
          cout<<"Fruit";
   }
   else if(userItem == GR_WATER || userItem == GR_JUICE){
          cout<<"Drink";
   }
   else{
          cout<<"Unknown";
   }
   cout<<endl;  

  /* Solution End */


   return 0;
}
