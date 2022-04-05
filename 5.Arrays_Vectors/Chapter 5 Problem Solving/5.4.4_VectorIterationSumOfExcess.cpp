#include <iostream>
#include <vector>
using namespace std;

int main() {
   const int NUM_VALS = 4;
   vector<int> testGrades(NUM_VALS);
   unsigned int i;
   int sumExtra = -9999; // Assign sumExtra with 0 before your for loop

   for (i = 0; i < testGrades.size(); ++i) {
      cin >> testGrades.at(i);
   }

  /* Solution Beginning */
  
  	sumExtra = 0;
	// loop to access each score
	for (i = 0; i < NUM_VALS; ++i)
	{
	// credit greater then 100 i.e. extra credit
	if (testGrades[i]>100)
	{
	// add extra credit to sumExtra
	sumExtra += testGrades[i]-100;
	}
	// if credit is less then or equal to 100
	else
	{
	continue;
	}
	}

  /* Solution End */

   cout << "sumExtra: " << sumExtra << endl;
   return 0;
}
