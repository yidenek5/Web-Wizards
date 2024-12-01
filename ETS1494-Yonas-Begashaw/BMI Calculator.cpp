#include <iostream>
using namespace std;
int main () {

float mass,height,BMI;
char response;

  label:
    cout << "Enter your mass in kilograms" << endl;
    cin >> mass;
    cout << "Enter your height in meters" << endl;
    cin >> height;
    BMI = mass / (height * height);
    cout << "Your BMI is " << BMI << endl;
     
    if (BMI < 18.5) {
        cout << "You are underweight." << endl;
    }else if (BMI >= 18.5 && BMI <25) {
        cout << "You have a healthy weight." << endl;
    }else if (BMI >= 25) {
        cout << "You are overweight.";   
    } 

  label2:
    cout <<"If you want to calculate again type Y if not type N" << endl;
    cin >> response;
    if (response == 'Y') {
        goto label;
    } else if (response == 'N') {
        cout <<"Exiting program";
    } else {
        cout <<"Invalid input, try again."<< endl;
        goto label2;
    } 

return 0;
} 
