// Include statements
#include <cstdlib>
#include <iostream>
using namespace std;
   
// Main function
int main()
{
   // Declare variables
   //Step3
   int * data;
   int number = 0;

   // Get user input
   cout << "Enter number of values:\n";
   cin >> number;

   //Step5
   if(number < 0)
   {
      cout << "Overriding user input to 42" << endl;
      number = 42;
   }
   //Step3
   data = new int[number];

   //Step2
   cout << "number = " << number << endl;
   // Process data
   for (int i = 0; i < number; i++)
   {
      data[i] = random() % 100;
      cout << data[i] << " ";
   }
   cout << endl;
   //Step2
   cout << "number = " << number << endl;


   //Step 6
   delete [] data;
   return 0 ;
}
