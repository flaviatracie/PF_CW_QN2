#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDivisors(int n) {
    vector<int> divisors;

    // Find all divisors
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0) {
            divisors.push_back(i);
        }
    }

    // Sort in decreasing order
    sort(divisors.rbegin(), divisors.rend());

    // Print divisors
    for (int divisor : divisors) {
        cout << divisor << endl;
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    while (true) {
        int num;
        cout << "Please enter a positive integer (or a negative/zero to quit): ";
        cin >> num;

        // Check for invalid input
        while (num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> num;
        }

        // Print divisors
        printDivisors(num);

        // Ask if the user wants to continue
        char choice;
        while (true) {
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> choice;

            if (choice == 'Y' || choice == 'y') {
                break;
            } else if (choice == 'N' || choice == 'n') {
                cout << "Thank you for using the program. Goodbye!" << endl;
                return 0;
            } else {
                cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            }
        }
    }

    return 0;
}
