// Name:
// This program calculates and displays business expenses.

#include <iostream>
#include <iomanip>
#include <string>

int main()
{

//State Variables.
double hotel, meal, total, cost, ftotal;
int days;
std::string location;
//Intro.
std::cout << "Welcome to the Business Trip Tracker!.";

//Get location
std::cout << "Where are you heading?";
std::cin >> location;
//Get Var days
std::cout << "How many days will the trip take?";
std::cin >> days;
//Get Hotel cost
std::cout << "How much does the hotel cost?.";
std::cin >> hotel;

  // Get the food cost.
  std::cout << "What is the meal's 'cost' ? ";
  std::cin >> cost;
  double tax = cost * 0.0775;
  double tip = cost * 0.20;
  // Calculate the cost of the meal.
  ftotal = cost+tax+tip;

  // Display the cost of the meal with tax and tip.
  std::cout << "The \"ftotal\" of the bill with tax and tip included is " << total << "$.";

  return 0;
  //calculate total for Business expenses.
  total = ftotal+hotel;
  std::cout << std::setw(15) << "location"
    << std::setw(17) << "days"
    << std::setw(17) << "hotel";
  std::cout << std::setw(15) << location;
    <<std::setw(17) << "ftotal"
    <<std::setw(17) << "days"
    <<std::setw(17) << "days"
    <<std::setw(17) << total << '\n';
  }
