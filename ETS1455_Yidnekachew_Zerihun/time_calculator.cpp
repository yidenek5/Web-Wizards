#include <iostream>
using namespace std;

int main() {
// Declare variables
    double file_size; // in bytes
    double transmission_rate = 960; // in characters per second
    double transmission_time; // in seconds

 // Prompt for and read the file size
    cout << "Enter the file size in bytes: ";
    cin >> file_size;
// Calculate the transmission time
    transmission_time = file_size / transmission_rate;

// display the result
    cout << "The transmission time is " << transmission_time << " seconds." << endl;
// Convert seconds to days, hours, minutes, and seconds
    int days = transmission_time / (24 * 3600);
    transmission_time = transmission_time - days * 24 * 3600;
    int hours = transmission_time / 3600;
    transmission_time = transmission_time - hours * 3600;
    int minutes = transmission_time / 60;
    transmission_time = transmission_time - minutes * 60;
    int seconds = transmission_time;

// dispaly the converted result
    cout << "Which is approximately " << days << " days, " 
         << hours << " hours, " 
         << minutes << " minutes, and " 
         << seconds << " seconds." << endl;

    return 0;
}
