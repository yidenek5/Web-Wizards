#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float capacity,mileage ,change,distance;

line9:  

cout << "\nplease enter the capacity  of an automobile fuel tank in Liter \n";

cin>>capacity;

if(cin.fail()){

cout << "\nplease enter only number\n";

cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line9;
}
else{
if(capacity<=0){

cout << "\nplease enter only number greater than 0.\n";

goto line9;
}
else{

line33:

cout << "please enter the speed that the automobile can driven in Meters per Liter\n";
cin>>mileage ;


if(cin.fail()){
cout << "\nplease enter only number\n";

cin.clear();

cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line33;
}
else{
if(mileage <=0){

cout << "\nplease enter only number greater than 0.\n";

goto line33;
}
else{
distance = mileage *capacity;

change = distance/1609.34;

}}}}

cout << "\nthe number of miles that the automobile can be driven without refueling is  "<<change<<" MI .";



    return 0;

}
