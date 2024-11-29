//Write a program that find the result of the expression for x to the power of y where the value of x and y are entered by user
#include <iostream>
//include cmath library for  powerfunction
#include <cmath>
using namespace std;
int main() {
    double x,y,result;
//Prompt the user to enter the value of x and y  
    cout<<"enter the base number: ";
    cin>>x;
    cout<<"enter the exponent: ";
    cin>>y;
// Storing x and y   
    double temp1=x,temp2=y;
//Calculate x^y using the pow function 
    result=pow(x,y);
//Display the result 
    cout<<"the result of "<<temp1<<" to the power of "<<temp2<<" is: "<<result;
    
return 0;
}
