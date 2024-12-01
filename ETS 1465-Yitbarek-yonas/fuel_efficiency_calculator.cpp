/*The C++ program computes the number of miles that an automobile can be driven based on input from fuel tank capacity (in gallons) and miles per gallon (MPG).
The program has provisions for error handling to ascertain valid input for the respective parameters. 
  It will then provide the output of total miles that the vehicle can travel on a full tank.*/
#include <iostream>
using namespace std;
int main() {
    double tankCapacity, milesPerGallon, totalMiles;
trial:
cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;
    if (cin.fail() ||  tankCapacity <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
 cout    << "Please enter a valid tankCapacity.\n";
 goto trial;
}
 trial1:
 cout << "Enter the miles per gallon the automobile can be driven: ";
    cin >> milesPerGallon;;
    if (cin.fail() ||milesPerGallon <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
 cout    << "Please enter a valid milesPerGallon.\n";
 goto trial1;
}
totalMiles = tankCapacity * milesPerGallon;
 cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;
 return 0;
}
