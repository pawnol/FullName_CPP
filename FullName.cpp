/*
Full Name
Pawelski
3/13/2022
Please follow the instructions on the activity sheet for what needs
to be completed.
*/

#include <iostream>
#include <string>

int main()
{
    std::string first_name, middle_name, last_name, full_name;
    std::cout << "What is your first name? >> ";
    std::cin >> first_name;
    std::cout << ""; // this line needs to print a prompt to have the user enter their middle name
    // store the middle name entered by the user into the varaible middle_name
    // print a prompt to have the user enter their last name
    // store the last name entered by the user into the varaible last_name
    // using concatenation, combine the entered first, middle, and last names and store into the variable full_name (HINT: don't forget spaces)
    std::cout << "Your full name is " << full_name << "." << std::endl;
    return 0;
}
