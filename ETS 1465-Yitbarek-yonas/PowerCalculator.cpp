/*The program in C++ calculates the power of numbers which means x^y, where it takes input from the user the base x and exponent y and checks them to power it by using the pow function from library <cmath>. 
Also check for invlid and indetermminate values. The output is power which means x raised to the power of y.*/
#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

int main() {
    double x, y, result;

    // Using goto for input validation for x
    trial1:
    cout << "Enter the value of x (base): ";
    cin >> x;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for x (base).\n";
        goto trial1;  // Go back to asking for x
    }

    // Using goto for input validation for y
    trial2:
    cout << "Enter the value of y (exponent): ";
    cin >> y;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for y (exponent).\n";
        goto trial2;  // Go back to asking for y
    }

    // Handle edge case for 0 raised to 0
    if (x == 0 && y == 0) {
        cout << "Error: 0 raised to the power 0 is#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

int main() {
    double x, y, result;

    // Using goto for input validation for x
    trial1:
    cout << "Enter the value of x (base): ";
    cin >> x;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for x (base).\n";
        goto trial1;  // Go back to asking for x
    }

    // Using goto for input validation for y
    trial2:
    cout << "Enter the value of y (exponent): ";
    cin >> y;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for y (exponent).\n";
        goto trial2;  // Go back to asking for y
    }

    // Handle edge case for 0 raised to 0
    if (x == 0 && y == 0) {
        cout << "Error: 0 raised to the power 0 is indeterminate." << endl;
    }
    // Handle edge case where 0 raised to a negative power is undefined
    else if (x == 0 && y < 0) {
        cout << "Error: Cannot raise 0 to a negative power." << endl;
    } else {
        // Calculate x raised to the power of y
        result = pow(x, y);

        // Output the result
        cout << "The result of " << x << " raised to the power " << y << " is: " << result << endl;
    }

    return 0;
}
#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

int main() {
    double x, y, result;

    // Using goto for input validation for x
    trial1:
    cout << "Enter the value of x (base): ";
    cin >> x;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for x (base).\n";
        goto trial1;  // Go back to asking for x
    }

    // Using goto for input validation for y
    trial2:
    cout << "Enter the value of y (exponent): ";
    cin >> y;
    if (cin.fail()) {
        cin.clear();  // Clear the error state
        cin.ignore(1000, '\n');  // Discard invalid input
        cout << "Please enter a valid value for y (exponent).\n";
        goto trial2;  // Go back to asking for y
    }

    // Handle edge case for 0 raised to 0
    if (x == 0 && y == 0) {
        cout << "Error: 0 raised to the power 0 is indeterminate." << endl;
    }
    // Handle edge case where 0 raised to a negative power is undefined
    else if (x == 0 && y < 0) {
        cout << "Error: Cannot raise 0 to a negative power." << endl;
    } else {
        // Calculate x raised to the power of y
        result = pow(x, y);

        // Output the result
        cout << "The result of " << x << " raised to the power " << y << " is: " << result << endl;
    }

    return 0;
}
." << endl;
    }
    // Handle edge case where 0 raised to a negative power is undefined
    else if (x == 0 && y < 0) {
        cout << "Error: Cannot raise 0 to a negative power." << endl;
    } else {
        // Calculate x raised to the power of y
        result = pow(x, y);

        // Output the result
        cout << "The result of " << x << " raised to the power " << y << " is: " << result << endl;
    }

    return 0;
}
