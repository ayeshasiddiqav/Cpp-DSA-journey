#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "NUMBER ANALYZER" << endl;
    cout << "1. Check prime and print multiples" << endl;
    cout << "2. Reverse a number and check palindrome" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if(choice == 1) {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        bool isPrime = true;
        if(n <= 1) isPrime = false;
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                isPrime = false;
                break;
            }
        }

        if(isPrime) {
            cout << n << " is a prime number" << endl;
        } else {
            cout << n << " is not a prime number" << endl;
        }

        cout << "First 5 multiples of " << n << ": ";
        for(int i = 1; i <= 5; i++) {
            cout << n*i;
            if(i < 5) cout << ", ";
        }
        cout << endl;

    } else if(choice == 2) {
        int n, original, reversed = 0, remainder;
        cout << "Enter a number: ";
        cin >> n;
        original = n;

        while(n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n = n/ 10;
        }

        cout << "Reversed number: " << reversed << endl;

        if(original == reversed) {
            cout << original << " is a palindrome" << endl;
        } else {
            cout << original << " is not a palindrome" << endl;
        }

    } else {
        cout << "Invalid choice" << endl;
    }

    return 0;
}
