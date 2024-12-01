#include <iostream>
#include <math.h>
using namespace std;

int main () {
  
int x, y, result;
cout << "Enter the base." << endl;
cin >> x;
cout << "Enter the exponent" << endl;
cin >> y;
  
result = pow (x,y);
cout << x << " the power of " << y << " = " << result;
  
return 0;
}
