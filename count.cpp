#include <iostream>
#include <sstream>

int main() {
    std::string line;
    
    // Read a line of input
    std::cout << "Enter a line of numbers separated by spaces: ";
    std::getline(std::cin, line);

    std::istringstream iss(line);
    int count = 0;
    int number;

    // Count the numbers in the line
    while (iss >> number) {
        count++;
    }

    std::cout << "Total number of numbers in the line: " << count << std::endl;

    return 0;
}