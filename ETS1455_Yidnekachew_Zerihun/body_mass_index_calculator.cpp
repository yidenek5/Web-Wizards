#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double height,weight,bodymassindex;
    char continue1;
    do{
    cout<<"please enter the height of the person in centimeter: ";
    cin>>height;
    cout<<"please enter the weight of the person in killogram: ";
    cin>>weight;
    height=height/(100);
    if (height>0 && weight>=0){
    bodymassindex=weight/(pow(height,2 ));
    cout<<"the BMI of the person is: "<<bodymassindex<<endl;
    if (bodymassindex>25) {
        cout<<"the person is overweight"<<endl;
    }else if(bodymassindex>=18 && bodymassindex<=25){
        cout<<"the person is normalweight"<<endl;
    }else {
        cout<<"the person is underweight"<<endl;
        
    }
    
    }else if(height<=0 && weight>=0){
        cout<<"please enter a valid height of a person ";
    }else if(height>0 && weight<0){
        cout<<"please enter a valid weight of a person";
    }else{
        cout<<"please enter a valid weight of a person";
    }
    cout<<"if you want to continue enter 0,if not enter any charcter: ";
    cin>>continue1;
    }while(continue1=='0');
    cout<<"Thank you";
    return 0;
    
    
    
    
    
  }
