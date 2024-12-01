#include<iostream>
// #include<cmath>

using namespace std;

int main() {
    // take two numbers from user as x , y, and then to get the power of themselves
    float x,y;
    line9:
    cout<<"Enter the base number : ";
    cin>>x;
    // to check the user base number input is valid or not
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout<<"You have entered invalid base number, please enter only integers."<<endl;

        goto line9;
    }
    line19:
    cout<<"Enter the second number(the exponent): ";
    cin>>y;
    // to check the user exponent input is valid or not
    if (cin.fail()) {
        cin.clear();
        cin.ignore();
        cout<<"You have entered invalid exponent number, please enter only integers."<<endl;
        goto line19;
    }
    float temp1 = x;
    float temp2 = y;
    // check the value of y if it's negative or positive
    if (y < 0 ) {
        y = -1*temp2;
        for (int i=1; i<y; i++) {
            x *= temp1;
        }
        x = 1/x ;

    }else {
        if (y == 0 ) {
            x = 1;
        }

        for(int i=1; i<y; i++){
            x *= temp1;
        }

        cout<<"The value of "<<temp1<<" the power of "<<temp2<<"is :"<<x<<endl;


        // we can do easily by using built in function by including <cmath>
        // double power = pow(x,y);
        // cout<<power;
    }
}