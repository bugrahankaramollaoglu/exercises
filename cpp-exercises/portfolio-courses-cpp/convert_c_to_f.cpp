/*******************************************************************************
*
* Program: Convert Celsius To Fahrenheit
* 
* Description: Program to convert a temperature in Celsius to a temperature in 
* Fahrenheit using C++.
*
* YouTube Lesson: https://www.youtube.com/watch?v=bEzG6bpNmRk 
*
* Author: Kevin Browne @ https://portfoliocourses.com
*
*******************************************************************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
  // Variables to store temperatures in celsius and fahrenheit.  Type double is
  // used because temperatures may have decimal places and double type variables
  // can store numbers with decimal places.
  double celsius, fahrenheit;
  
  // Prompt the user to enter the temperature in celsius
  cout << "Enter Temperature (C): ";
  
  // Store the temperature entered into the variable celsius
  cin >> celsius;
  
  // Convert the temperature in celsius to the temperature in fahrenheit using 
  // the formula: https://en.wikipedia.org/wiki/Fahrenheit.  Store the 
  // converted temperature into the variable fahrenheit.  Note it is important
  // that we divide 9.0/5.0 and not 9/5 as the latter will result in integer
  // division (i.e. 1 and not 1.8) which will then result in the formula 
  // producing incorrect results.
  fahrenheit = (9.0/5.0) * celsius + 32;
  
  // Output the temperature in fahrenheit with 2 decimal digits of precision 
  // using the stream manipulators fixed and setprecision from the iomanip
  // library.
  cout << "Temperature (F): ";
  cout << fixed << setprecision(2) << fahrenheit << endl;

  return 0;
}
