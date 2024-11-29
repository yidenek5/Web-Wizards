#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float fileSize,time;

line9:

cout << "\nplease enter the file size  that you want to get how long it will take to send a file in byte\n";
    cin>>fileSize;

if(cin.fail()){
    cout << "please enter only number\n";
        cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    goto line9;

}
else{
    if(fileSize<0){
        cout << "please enter number greater than or equal to 0\n";
        goto line9;

    }
    else{
     time = fileSize/960;
     cout << "To send "<<fileSize<<" byte file size it require "<< time<<" second\n\n";
    }
}



    return 0;
}
