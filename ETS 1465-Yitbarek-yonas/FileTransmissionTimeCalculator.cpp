/*This C++ program computes the time it will take to transmit a file of a given size in bytes at a constant transmission rate of 960 bytes per second. 
It will solicit the user for the amount of the file and check the validity of the input before computing the transmission time in days, hours, minutes, and seconds.*/
#include <iostream>
using namespace std;
int main() {
 int transmission_speed = 960;
int long long file_size;
 trial1:
   cout << "Enter the file size in bytes: ";
    cin >> file_size;
if (cin.fail() ||file_size <= 0) {
                cin.clear();              // Clear the error state
                cin.ignore(1000, '\n');   // Discard invalid input up to 1000 charachter or stops when the newline (\n) is encountered.
             cout << "Please enter a valid file size in bytes .\n";
 goto trial1;
}
 long long time_in_seconds = file_size / transmission_speed;
 // Calculate time in days, hours, minutes, and seconds
    long long days = time_in_seconds / (24 * 3600);
    time_in_seconds %= (24 * 3600);  // Remaining seconds after extracting days
    long long hours = time_in_seconds / 3600;
    time_in_seconds %= 3600;  // Remaining seconds after extracting hours
    long long minutes = time_in_seconds / 60;
    long long seconds = time_in_seconds % 60;
 // Display the result
    cout << "It will take approximately: " << endl;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;
 return 0;
}
