#include <iostream>
#include <limits>  // Required for std::numeric_limits

int main() {
    int userInput;

    std::cout << "Enter an integer: ";
    std::cin >> userInput;

    // Clear the input buffer to remove the newline character
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    // Rest of your program...

    return 0;
}
