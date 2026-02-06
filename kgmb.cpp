
#include <iostream>
#include <cmath>

// Function to check if a number is prime
bool isPrime(int num) {
    // Numbers less than 2 are not prime
    if (num <= 1) {
        return false;
    }
    // Check divisibility from 2 up to the square root of the number
    for (int j = 2; j <= std::sqrt(num); ++j) {
        if (num % j == 0) {
            return false; // If divisible, it's not prime
        }
    }
    return true; // If no divisors found, it's prime
}

int main() {
    int i, n;

    // Get input from the user
    std::cout << "Enter the starting number (i): ";
    std::cin >> i;
    std::cout << "Enter the ending number (n): ";
    std::cin >> n;

    // Ensure the starting number is not greater than the ending number
    if (i > n) {
        std::cout << "Error: Starting number must be less than or equal to ending number." << std::endl;
        return 1;
    }

    std::cout << "Prime numbers from " << i << " to " << n << " are: ";

    // Iterate through the range from i to n
    for (int currentNum = i; currentNum <= n; ++currentNum) {
        // Check if the current number is prime using the isPrime function
        if (isPrime(currentNum)) {
            std::cout << currentNum << " ";
        }
    }

    std::cout << std::endl;

    return 0;
}
