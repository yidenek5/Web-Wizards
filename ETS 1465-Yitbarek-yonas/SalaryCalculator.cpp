/*This is a C++ program that calculates the bonus payment, gross salary, and net salary for an employee after deducting pension and tax. 
  The user has to input the number of hours worked in a week, the rates of bonus per hour, and base salary with error-checking input.
  The program finally calculates and displays the bonus, gross salary, and net salary after considering pensions and tax deductions.*/
#include <iostream>
using namespace std;
int main() {
double weeklyHours, bonusRate, baseSalary;
double bonusPayment, grossSalary, pensionDeduction, taxDeduction, netSalary;
trial:
     cout << "Enter weekly working hours: ";
    cin >> weeklyHours;
if (cin.fail() || weeklyHours  <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
 cout    << "Please enter a valid weekly working Hours.\n";
goto trial;
}
trial1:
cout << "Enter bonus rate per hour (0 - 1): ";
    cin >> bonusRate;
if (cin.fail() || bonusRate <= 0 ||  bonusRate >= 1) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
 cout    << "Please enter a valid  bonus Rate  per hour between 0 and 1.\n";
goto trial1;
}
int counter2 = 0;
 trial2:
 cout << "Enter base salary: ";
    cin >> baseSalary;
if (cin.fail() || bonusRate <= 0 ||  bonusRate >= 1) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
cout    << "Please enter a valid base Salary.\n";
 goto trial2;
}
bonusPayment = weeklyHours * bonusRate;
grossSalary = baseSalary + bonusPayment;
pensionDeduction = 0.05 * grossSalary;
taxDeduction = 0.15 * grossSalary;
netSalary = grossSalary - (pensionDeduction + taxDeduction);
cout << "Bonus Payment: $" << bonusPayment << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Net Salary: $" << netSalary << endl;
 return 0;
}
