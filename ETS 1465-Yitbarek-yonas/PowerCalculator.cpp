/*The program in C++ calculates the power of numbers which means x^y, where it takes input from the user the base x and exponent y and checks them to power it by using the pow function from library <cmath>. 
The output is power which means x raised to the power of y.*/
#include <iostream>
#include <cmath>  // For the pow function
using namespace std;
int main() {
    double x, y, result;
 trial:
cout << "Enter the value of x: ";
    cin >> x;
if (cin.fail() ) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
             cout << "Please enter valid value of x.\n";
  goto trial;
}
 trial1:
 cout << "Enter the value of y: ";
    cin >> y;
if (cin.fail() ) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
             cout << "Please enter valid value of y.\n";
  goto trial1;
}
 // Calculate x^y (x raised to the power y)
    result = pow(x, y);

    // Output the result
    cout << "The result of " << x << " raised to the power " << y << " is: " << result << endl;

    return 0;
}
