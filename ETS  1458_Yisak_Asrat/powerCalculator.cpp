#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float base,exponent ,power;

line9:  

cout << "\nPlease enter the base number \n";

cin>>base;

if(cin.fail()){

cout << "\nPlease enter only number\n";

cin.clear();
cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line9;
}
else{
    line33:
cout << "\nPlease enter the exponent number \n";

cin>>exponent;

if(cin.fail()){
cout << "\nPlease enter only number\n";

cin.clear();

cin.ignore(numeric_limits<streamsize>::max(),'\n');

goto line33;
}
else{

if(base==0 && exponent==0){
   
    cout <<base <<" The power of "<< exponent<<" is "<< "\nThis result is an indeterminate form.\n"<<endl;
}
else if(base==0 && exponent<0){
   
    cout <<base <<" The power of "<< exponent<<" is "<<"\nThis is undifined\n"<<endl;
}
else if(base<0 && (exponent>0 &&  exponent<1)){
  
    cout <<base <<" The power of "<< exponent<<" is "<<"\nThis is complex number\n"<<endl;
}
else{
    power = pow(base,exponent);
    cout <<base <<" The power of "<< exponent<<" is "<<power<<endl;
}

}}



    return 0;

}
