#include <iostream>
using namespace std;

int main() {
   int numRows;
   int numColumns;
   int currentRow;
   int currentColumn;
   char currentColumnLetter;

   cin >> numRows;
   cin >> numColumns;

  /* Solution Beginning */
  
  	for(int i=1; i <= numRows; i++)
	{
	for(int j=65; j <= 65 + numColumns -1; j++)
	{
	char character = char(j);
	cout<<i<<character<<" ";
	}
	}

  /* Solution End */

   cout << endl;

   return 0;
}
