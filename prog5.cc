/**
 *       @file: prog5.cc
 *       @author: Joe Ash
 *       @date: 09/14/2022         \
 *       @brief: Step 5 
 *  
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   int fah = 56;  //declare and initialize at the same time - page 48
   int cel = 20;

   ctof =  cel * 9.0 / 5 + 32;
   ftoc = (fah - 32) * 5 / 9.0;


   cout << cel << " degrees Celsius in Fahrenheit is " << setprecision(3) << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
