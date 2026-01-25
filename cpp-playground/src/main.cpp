#include <iostream>
#include <string>   // Required for std::string
using namespace std;

int main() {
    string first, second;  // Variables to store user input

    // Repeat input and concatenation 3 times
    for (int i = 1; i <= 3; i++) {
        cout << "Iteration " << i << endl;

        cout << "Enter first string: ";
        getline(cin, first);   // Reads entire line including spaces

        cout << "Enter second string: ";
        getline(cin, second);

        // Concatenate the two strings
        string result = first + second;

        // Display the result
        cout << "Concatenated result: " << result << endl << endl;
    }

    return 0; // Program ends successfully
}
