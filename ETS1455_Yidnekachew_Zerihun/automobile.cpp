#include <iostream>
using namespace std;

int main() {
 // Declare variables
    double tank_capacity,miles_per_gallon,total_miles;

// Prompt for and read the tank capacity in gallons and miles per gallon
    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tank_capacity;
    cout << "Enter the miles per gallon: ";
    cin >> miles_per_gallon;
// Calculate the total miles
    total_miles = tank_capacity * miles_per_gallon;
// Output the result
    cout << "The automobile can be driven " << total_miles << " miles without refueling." << endl;

    return 0;
}
