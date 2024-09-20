#include <iostream>
#include <string>

bool containsAllLetters(const std::string& firstStr, const std::string& secondStr) {
    for (char c : secondStr) {
        if (firstStr.find(c) == std::string::npos) {
            return false;  // If any character is not found, return false
        }
    }
    return true;  // All characters are found, return true
}

int main() {
    std::string firstString, secondString;

    // Input the first string
    std::cout << "Enter the first string: ";
    std::cin >> firstString;

    // Input the second string
    std::cout << "Enter the second string: ";
    std::cin >> secondString;

    // Check if the first string contains all letters from the second string
    bool result = containsAllLetters(firstString, secondString);

    // Output the result
    if (result) {
        std::cout << "Check - First string contains all letters from second string: true" << std::endl;
    } else {
        std::cout << "Check - First string contains all letters from second string: false" << std::endl;
    }

    return 0;
}
