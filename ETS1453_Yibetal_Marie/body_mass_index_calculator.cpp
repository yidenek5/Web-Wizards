#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    char user_choice = 'y';
    int attempts = 3;
    while(user_choice == 'y'){

        float height,weight;
        line12:

        cout<<"Enter the person's weight: ";
        cin>>weight;
        if (cin.fail() || weight <= 0){
            attempts--;
            cin.clear();
            cin.ignore();
            if (attempts > 0){
                cout<<"You have "<<attempts<<" chances, so please enter valid input only positive number:"<<endl;
            }
            else{
                cout<<"you have entered invalid input and finished your attempts to try.";
                break;
            }
            goto line12;
        }
        label26:
        cout<<"Enter the person's height: ";
        cin>>height;
        if (cin.fail() || height <= 0){
            attempts--;
            cin.clear();
            cin.ignore();
            if (attempts > 0){
                cout<<"You have "<<attempts<<" chances, so please enter valid input only positive number:"<<endl;
            }
            else{
                cout<<"you have entered invalid input and finished your attempts to try.";
                break;
            }
            goto label26;
        }


        float body_mass_index = weight/(height*height);
        cout<<"The body mass index of the person is : "<<body_mass_index<<endl;

        if (body_mass_index < 18.5 ){

            cout<<"The person is underweight"<<endl;
        }
        else if(body_mass_index > 18.5 && body_mass_index < 24.9 ){
            cout<<"The person is Normal."<<endl;
        }
        else if(body_mass_index > 30){
            cout<<"The person is obese"<<endl;
        }


        cout<<"Do you want to continue calculating for other person.press (y/n): ";
        cin>>user_choice;

    }

    return 0;
}