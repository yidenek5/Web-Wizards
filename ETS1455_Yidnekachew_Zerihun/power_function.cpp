//Write a program that find the result of the expression for x the power of y where the value of x and y are entered by user
#include <iostream>
// Include the cmath library for the pow function
#include <cmath>
using namespace std;
int main() {
   double x,y,result;
 // Prompt the user to enter the values of x and y
    cout<<"please enter the base number: ";
    cin>>x;
    cout<<"please enter the exponent: ";
    cin>>y;
//Storing the value x and y    
    double temp1=x,temp2=y;
// Calculate x^y using the pow function
    result=pow(x,y);
// Display the result   
   cout<<"the result of "<<temp1<<" to the power of "<<temp2<<" is: "<<result;
    
return 0;
}
