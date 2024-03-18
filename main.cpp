#include <iostream>
using namespace std;


int main( )
{

float totalCost, salaries, rent, elecCost, sum = 0.0, markup;


cout << "Enter the total cost:R";
cin >> totalCost;

cout << "Enter the salaries for all employees:R";
cin >> salaries;


cout << "Enter the yearly rent:R";
cin >> rent;


cout << "Estimated electricity cost:R";
cin >> elecCost;

sum = totalCost + salaries + rent + elecCost;

cout<< "The sum of all expenses is R" << sum << endl;
cout<< "To make profit of 10% after paying all the expenses, Linda should markup the prices to give R";
markup = 10.0/100 * sum;
cout << markup;

return 0;

}


