#include<iostream>
using namespace std;
int main() {
    float gallon_of_fuel ;
    float miles_per_gallon ;
    int attempts = 3;
    float distance ;
    label7:
    cout<<"Enter the amount of gallon of fuel (capacity) the automobile can intake: ";
    cin>>gallon_of_fuel;
    if(cin.fail() || gallon_of_fuel < 0) {
        cin.clear();
        cin.ignore();
        cout<<"Invalid input for gallon capacity, so please enter positive number"<<endl;
        attempts--;
        goto label7;
    }
    label17:
    cout<<"Enter the miles that the automobile can be driven within a gallon of fuel: ";
    cin>>miles_per_gallon;
    if (cin.fail() || miles_per_gallon < 0) {
        cout<<"You have entered invalid input, please enter positive number: "<<endl;
        cin.clear();
        cin.ignore();
        attempts--;
        goto label17;

    }
    float total_mile = gallon_of_fuel * miles_per_gallon;
    cout<<"The automobile can be driven for "<<total_mile<<" miles without refueling."<<endl;

    // to check the automobile capable or not after the user enters the distance in mile
    cout<<"Enter the distance you want to check that the automobile capable or not: ";
    cin>>distance;
    if (distance <= total_mile) {
        cout<<"Sure,The automobile can be driven this amount of distance without refueling."<<endl;
    }
    else {
        cout<<"You have to add another gallon of fuel. "<<endl;
    }
}
