#include<iostream>
using namespace std;
int main() {
    float gallon_of_fuel ;
    float miles_per_gallon ;
    int attempts = 3;
    float distance ;
    char user_choice;
    do {
        label10:
        cout<<"Enter the amount of gallon of fuel (capacity) the automobile can intake: ";
        cin>>gallon_of_fuel;
        if(cin.fail() || gallon_of_fuel < 0) {
            cin.clear();
            cin.ignore();
            attempts--;
            cout<<"Invalid input for gallon capacity, you have only "<<attempts<<" chance so please enter positive number"<<endl;
            if (attempts < 0) {
                cout<<"You have finished your attempts.";
                break;
            }
            goto label10;
        }
        label24:
        cout<<"Enter the miles that the automobile can be driven within a gallon of fuel: ";
        cin>>miles_per_gallon;
        if (cin.fail() || miles_per_gallon < 0) {
            cin.clear();
            cin.ignore();
            attempts--;
            cout<<" invalid input for miles, you have only "<<attempts<<" chance please enter positive number: "<<endl;
            if (attempts < 0) {
                cout<<"You have finished your attempts.";
                break;
            }
            goto label24;

        }
        float total_mile = gallon_of_fuel * miles_per_gallon;
        cout<<"The automobile can be driven for "<<total_mile<<" miles without refueling."<<endl;

        cout<<"Do you want to calculate for another automobile? press (y/n): ";
        cin>>user_choice;

    }while(user_choice == 'y');

}
