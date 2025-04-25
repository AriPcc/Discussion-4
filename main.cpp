/******************************************************************************
# Author:            Ari Pollack and Xavier Braker
# Assignment:        Discussion 4
# Date:              April 24, 2025
# Description:       This program will generate a login name from the user’s
                     first and last name and a 4-digit number of their choice.
# Input:             firstName (string), lastName (string), userNum (int)
# Output:            loginName (string)
# Sources:           Discussion 4 specifications, cplusplus.com reference,
                     zyBooks reference
#*****************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main() {
   // Declare variables for input and output
   string firstName = "";
   string lastName = "";
   int userNum = 0;
   string loginName = "";

   // Print a welcome message
   cout << "Welcome to the Login Name Generator." << endl << endl;

   // Prompt user for input (firstName lastName userNum, e.g. "Arnold Pong
   // 1934").
   cout << "Enter first name, last name, and a 4-digit number: ";
   cin >> firstName;
   cin >> lastName;
   cin >> userNum;

   // Add the first 5 characters of lastName, the first character of firstName,
   // and the last two digits of userNum to loginName.
   loginName += lastName.substr(0, 5);
   loginName += firstName.substr(0, 1);
   // Convert userNum to a string, then get the last two characters
   loginName += (to_string(userNum)).substr(2, 2);

   // Print the results
   cout << endl << "Login name is: " << loginName << endl << endl;

   // Print a goodbye message
   cout << "Thank you for using the Login Name Generator." << endl;

   return 0;
}
