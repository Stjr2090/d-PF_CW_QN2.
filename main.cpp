#include <iostream>
using namespace std;

// Function to print divisors of a number in decreasing order
void printDivisors(int num) {
    for (int i = num; i >= 1; i--) {
        if (num % i == 0) {
            cout << i << endl;
        }
    }
}

int main() {
    cout << "This program is designed to exhibit the positive divisors of positive integers supplied by you." << endl;
    cout << "The program will repeatedly prompt you to enter a positive integer." << endl;
    cout << "Each time you enter a positive integer, the program will print all the divisors of your integer in a column and in decreasing order." << endl;

    char response;
    int num;

    do {
        cout << "Please enter a positive integer: ";
        cin >> num;

        while (num <= 0) {
            cout << num << " is not a positive integer." << endl;
            cout << "Please enter a positive integer: ";
            cin >> num;
        }

        printDivisors(num);

        cout << "Would you like to see the divisors of another integer (Y/N)? ";
        cin >> response;

        while (response != 'Y' && response != 'y' && response != 'N' && response != 'n') {
            cout << "Please respond with Y (or y) for yes and N (or n) for no." << endl;
            cout << "Would you like to see the divisors of another integer (Y/N)? ";
            cin >> response;
        }
    } while (response == 'Y' || response == 'y');

    return 0;
}
