// Name:
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{

//State Variables.
double hotel, meal, total, cost, food;
int days;
std::string location;
//Intro.
std::cout << "Welcome to the Business Trip Tracker! ";

//Get location
std::cout << "Where are you heading? ";
std::cin >> location;
//Get Var days
std::cout << "How many days will the trip take? ";
std::cin >> days;
//Get Hotel cost I'm not sure if the hotal cost was supposed to be per day but it makes sense that it is.
std::cout << "How much does the hotel cost per day? ";
std::cin >> hotel;
double htotal = hotel*days ;
// Get the food cost.
std::cout << "how much did you spend on food a day? ";
std::cin >> food;
double ftotal = food*days ;

//calculate total for Business expenses.
total = ftotal+htotal;
std::cout << std::setw(17) << "location"
      << std::setw(17) << "days"
      << std::setw(17) << "hotel"
      << std::setw(17) << "food"
      << std::setw(17) << "total" << '\n' ;
std::cout << std::setw(17) << location ;
std::cout  << std::setw(17) << days ;
std::cout  << std::setw(17) << htotal ;
std::cout  << std::setw(17) << ftotal ;
std::cout  << std::setw(17) << total ;


return 0;
  }
