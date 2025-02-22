#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter the position (n) to get the nth Fibonacci number: ";
    cin >> n;
    
    if (n < 0) {
        cout << "Please enter a non-negative integer." << endl;
    } else {
        int result = fibonacci(n);
        cout << "The " << n << "th Fibonacci number is: " << result << endl;
    }
    
    return 0;
}
