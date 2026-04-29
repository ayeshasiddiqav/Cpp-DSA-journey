#include<iostream>
using namespace std;

int main() {
    int choice;
    cout << "Number Programs" << endl;
    cout << "1.  Factorial" << endl;
    cout << "2.  Fibonacci Series" << endl;
    cout << "3.  Prime Number Check" << endl;
    cout << "4.  Palindrome Number" << endl;
    cout << "5.  Armstrong Number" << endl;
    cout << "6.  Strong Number" << endl;
    cout << "7.  Perfect Number" << endl;
    cout << "8.  Reverse a Number" << endl;
    cout << "9.  Sum of Digits" << endl;
    cout << "10. Count Digits" << endl;
    cout << "11. GCD of Two Numbers" << endl;
    cout << "12. LCM of Two Numbers" << endl;
    cout << "13. Leap Year Check" << endl;
    cout << "Enter your choice: ";
  
    cin >> choice;

    switch(choice) {

        case 1: {
            // Factorial
            int n;
            cout << "Enter a number: ";
            cin >> n;
            long long fact = 1;
            for(int i = 1; i <= n; i++)
            {
                fact *= i;
            }
            cout << "Factorial of " << n << " = " << fact << endl;
            break;
        }

        case 2: {
            // Fibonacci Series
            // The Fibonacci series is a sequence where each number is the sum of the two numbers before it.
            int n;
            cout << "How many terms: ";
            cin >> n;
            int a = 0, b = 1;
            cout << "Fibonacci: ";
            for(int i = 1; i <= n; i++)
            {
                cout << a << " ";
                int next = a + b;
                a = b;
                b = next;
            }
            cout << endl;
            break;
        }

        case 3: {
            // Prime Number
            int n;
            cout << "Enter a number: ";
            cin >> n;
            bool isPrime = true;
            if(n <= 1) isPrime = false;
            for(int i = 2; i*i <= n; i++)
            {
                if(n % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) cout << n << " is a prime number." << endl;
            else cout << n << " is not a prime number." << endl;
            break;
        }

        case 4: {
            // Palindrome
            int n, original, reversed = 0, remainder;
            cout << "Enter a number: ";
            cin >> n;
            original = n;
            while(n != 0) 
            {
                remainder = n % 10;
                reversed = reversed * 10 + remainder;
                n /= 10;
            }
            if(original == reversed) cout << original << " is a palindrome." << endl;
            else cout << original << " is not a palindrome." << endl;
            break;
        }

        case 5: {
            // Armstrong Number
            // sum of digits to the power of number of digits is equal to number 
            int n, original, sum = 0, remainder, digits = 0, temp;
            cout << "Enter a number: ";
            cin >> n;
            original = n;
            temp = n;
            while(temp != 0)
            {
                digits++;
                temp /= 10;
            }
            temp = n;
            while(temp != 0) 
            {
                remainder = temp % 10;
                int power = 1;
                for(int i = 0; i < digits; i++) power *= remainder;
                sum += power;
                temp /= 10;
            }
            if(sum == original) cout << original << " is an Armstrong number." << endl;
            else cout << original << " is not an Armstrong number." << endl;
            break;
        }

        case 6: {
            // Strong Number: individual digit factorial sum is equal to number
           
            int n, original, sum = 0, remainder;
            cout << "Enter a number: ";
            cin >> n;
            original = n;
            while(n != 0) 
            {
                remainder = n % 10;
                int fact = 1;
                for(int i = 1; i <= remainder; i++) fact *= i;
                sum += fact;
                n /= 10;
            }
            if(sum == original) cout << original << " is a strong number." << endl;
            else cout << original << " is not a strong number." << endl;
            break;
        }

        case 7: {
            // Perfect Number: sum of its divisors excluding itself
            
            int n, sum = 0;
            cout << "Enter a number: ";
            cin >> n;
            for(int i = 1; i <= n/2; i++) 
            {
                if(n % i == 0) sum += i;
            }
            if(sum == n) cout << n << " is a perfect number." << endl;
            else cout << n << " is not a perfect number." << endl;
            break;
        }

        case 8: {
            // Reverse a Number
            int n, reversed = 0, remainder;
            cout << "Enter a number: ";
            cin >> n;
            while(n != 0) 
            {
                remainder = n % 10;
                reversed = reversed * 10 + remainder;
                n /= 10;
            }
            cout << "Reversed number: " << reversed << endl;
            break;
        }

        case 9: {
            // Sum of Digits
            int n, sum = 0, remainder;
            cout << "Enter a number: ";
            cin >> n;
            while(n != 0) 
            {
                remainder = n % 10;
                sum += remainder;
                n /= 10;
            }
            cout << "Sum of digits: " << sum << endl;
            break;
        }

        case 10: {
            // Count Digits
            int n, count = 0;
            cout << "Enter a number: ";
            cin >> n;
            while(n != 0) 
            {
                count++;
                n /= 10;
            }
            cout << "Number of digits: " << count << endl;
            break;
        }

        case 11: {
            // GCD 
            int a, b;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            while(b != 0) 
            {
                int temp = b;
                b = a % b;
                a = temp;
            }
            cout << "GCD = " << a << endl;
            break;
        }

        case 12: {
            // LCM 
            int a, b, gcd, lcm;
            cout << "Enter two numbers: ";
            cin >> a >> b;
            int x = a, y = b;
            while(y != 0) 
            {
                int temp = y;
                y = x % y;
                x = temp;
            }
            gcd = x;
            lcm = (a * b) / gcd;
            cout << "LCM = " << lcm << endl;
            break;
        }

        case 13: {
            // Leap Year
            int year;
            cout << "Enter a year: ";
            cin >> year;
            if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                cout << year << " is a leap year." << endl;
            } else {
                cout << year << " is not a leap year." << endl;
            }
            break;
        }

        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
