/* Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated and also give three chances for invalid input */

#include <iostream>
using namespace std;
int main(){
float weight, height, bmi;
    char choice;
    cout << "*************BMI CALCULATOR**********************" << endl;
    do {
         int counter = 0;
         trial1:
    cout << "Enter the person's weight in kg: ";
            cin >> weight;
           if (cin.fail() || weight <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
                counter++;
                      if (counter < 3)  {
                cout << "Invalid input. You have  " << (3 - counter) ;
                cout    << " chances left! Please enter a valid weight.\n";
                      }

                if(counter == 3){
                   return 1; // Exit the program
                }
                 goto trial1;
}
             int counter1 = 0;
         trial2:
    cout << "Enter the person's height in kg: ";
            cin >> height;
        if (cin.fail() || height <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input
                counter1++;
                if (counter1 < 3)  {
                cout << "Invalid input. You have  " << (3 - counter1) ;
                cout    << " chances left! Please enter a valid height.\n";
                }
                if(counter1 == 3){
                   return 1;
                }
         goto trial2;
}
             
       
        if (height <= 0) {
            cout << "Height must be greater than 0. Please try again." << endl;
            continue;
        }

        // Calculate BMI
        bmi = weight / (height * height);
cout << "Your BMI is: " << bmi << endl;
if (bmi < 18.5) {
            cout << "Weight category: Underweight" << endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "Weight category: Normal weight" << endl;
        } else {
            cout << "Weight category: Overweight" << endl;
        }

        // Ask if the user wants to continue
        cout << "\nDo you want to calculate BMI for another person?(To continue enter 'c' and to leave enter any character)  ";
        cin >> choice;

    } while (choice == 'c');
    
     cout << "************************************************"; 
    return 0;
    }
