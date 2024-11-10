#include <iostream>
using namespace std;

//Did some extra learning on this one using the variable "fact" to store the result of the factorial function. 
//This is a recursive function that calculates the factorial of a number using a pointer to store the result.
//The user can enter a number, and the program will display the factorial of that number. The user can choose to calculate another factorial or exit the program

// Recursive function to calculate factorial
void factorial(int n, int* result) {
    if (n == 0) {
		*result = 1;  // Base case: 0! = 1 (factorial of 0 is 1)
        return;
    }
    factorial(n - 1, result);  // Recursive call
    *result *= n;  // Multiply the result by n after the recursive call
}

int main() {
    int num;
    int fact = 1;  // Variable to hold the factorial result
    char choice;

    do {
        // Get user input
        cout << "Enter a number to calculate its factorial: ";
        cin >> num;

        // Call the recursive factorial function
        factorial(num, &fact);

        // Display the result
		cout << "Factorial of " << num << " is " << fact << endl; // Display the factorial of the number
		cout << "Address of fact: " << &fact << endl; // Display the address of the variable fact

        // Ask if the user wants to calculate another factorial
        cout << "Would you like to calculate another factorial? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');  // Loop if the user enters 'y' or 'Y'

    cout << "Thank you for using the factorial calculator!" << endl;
    
    return 0;
}