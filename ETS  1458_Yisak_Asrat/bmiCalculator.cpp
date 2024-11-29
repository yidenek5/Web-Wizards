#include <iostream>
#include <cmath>

using namespace std;

int main() {
float height,weight,BMI=0;

line9:  

cout << "\nplease enter the person height in Meter \n";

cin>>height;

if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line9;
}
else{
if(height<=0){
cout << "\nplease enter only number greater than 0.\n";

goto line9;
}
else{

line30:

cout << "\n please enter the person weight in kilogram \n";

cin>>weight;

if(cin.fail()){
cout << "\nplease enter only number\n";
cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line30;
}
else{
if(weight<=0){
cout << "\nplease enter only number greater than 0.\n";

goto line30;
}
else{
BMI = weight/pow(height,2);

}}}}

if(BMI>29.9){

cout<< "\nthe BMI of the person is "<<BMI<<" . which indicates the person is at obesity.\n";

}

else if(BMI>=25 && BMI<=29.9){

cout<< "\nthe BMI of the person is "<<BMI<<" . which indicates the person is at over weight.\n";

}
else if(BMI>=18.5 && BMI<25){

cout<< "\nthe BMI of the person is "<<BMI<<" . which indicates the person is at normal weight.\n";
}
else{

cout<< "\nthe BMI of the person is "<<BMI<<" . which indicates the person is at under weight.\n";

}


return 0;

}
