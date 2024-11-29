#include <iostream>
#include <cmath>

using namespace std;

int main() {
float workingHour, bonusRate, baseSalary, bonusPayment, grossSalary, tax, pension, netSalary;
string name;

cout << "\nPlease enter your name\n";
getline(cin, name);

line9:
cout << "\nPlease enter the weekly working hours\n";
cin >> workingHour;

if (cin.fail()) {
cout << "\nPlease enter only a number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto line9;
}
else {
if (workingHour < 0) {
cout << "\nPlease enter a number greater than or equal to 0\n";
goto line9;
}
else {
line33:
cout << "\nPlease enter the bonus rate per hour\n";
cin >> bonusRate;

if (cin.fail()) {
cout << "\nPlease enter only a number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto line33;
}
else {
if (bonusRate < 0) {
cout << "\nPlease enter a number greater than or equal to 0\n";
goto line33;
}
else {
line45:
cout << "\nPlease enter the base salary\n";
cin >> baseSalary;

if (cin.fail()) {
cout << "\nPlease enter only a number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
goto line45;
}
else {
if (baseSalary < 0) {
cout << "\nPlease enter a number greater than or equal to 0\n";
goto line45;
}
else {
bonusPayment = workingHour * bonusRate;
grossSalary = baseSalary + bonusPayment;
tax = grossSalary * 0.15;
pension = grossSalary * 0.05;
netSalary = grossSalary - (tax + pension);

cout << "Hello " << name << ", your status calculation is here:\n";
cout << "\nThe tax is " << tax << endl;
cout << "\nThe bonus payment is " << bonusPayment << endl;
cout << "\nThe pension is " << pension << endl;
cout << "\nThe gross salary is " << grossSalary << endl;
cout << "\nThe net salary is " << netSalary << endl;
}}}}}}

return 0;
}
