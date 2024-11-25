// A C/C++ program to find the maximum of three numbers
#include <iostream> // Include the iostream library
using namespace std; // Use the standard namespace

int main() { // Main function
    int a, b, c; // Declare variables
    cout << "Enter three numbers: "; // Prompt user for input
    cin >> a >> b >> c; // Read input values
    // Determine the maximum value
    int max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << "The maximum number is " << max << endl; // Output the result
    return 0; // End of program
}
