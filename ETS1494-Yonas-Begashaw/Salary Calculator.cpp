#include <iostream>
using namespace std;
int main () {

double working_hour, bonus_rate, base_salary, gross_income, net_salary, bonus, pension,pension_rate=0.05, tax_rate=0.15, tax,deduction; 

cout << "Enter your base salary" << endl;
cin >> base_salary;
cout << "Enter your weekly working hour" << endl;
cin >> working_hour;
cout << "Enter your bonus rate between 0 and 1" << endl;
cin >> bonus_rate;
  
pension = base_salary * pension_rate;
deduction = base_salary - pension;
bonus = working_hour * bonus_rate;
gross_income = deduction + bonus;
tax = gross_income * tax_rate;
net_salary = gross_income - tax;

cout << "Your pension is " << pension << endl;
cout << "Your bonus is " << bonus << endl;
cout << "Your gross income is "<< gross_income << endl;
cout << "Your tax is " << tax << endl; 
cout << "Your net salary is " << net_salary;

return 0;
}
