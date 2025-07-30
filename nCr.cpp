#include <iostream>
using namespace std;

int main() {
    int n, r;
    cout << "Enter value of n and r to calculate nCr: ";
    cin >> n >> r;

    // Check if input is valid
    if (r > n) {
        cout << "nCr is not defined when r > n (output is 0)." << endl;
        return 0;
    }

    // Calculate n!
    int fact_n = 1;
    for (int i = 1; i <= n; i++) {
        fact_n *= i;
    }

    // Calculate r!
    int fact_r = 1;
    for (int i = 1; i <= r; i++) {
        fact_r *= i;
    }

    // Calculate (n - r)!
    int fact_n_r = 1;
    for (int i = 1; i <= (n - r); i++) {
        fact_n_r *= i;
    }

    // Apply nCr formula
    int nCr = fact_n / (fact_r * fact_n_r);

    // Output the result
    cout << "nCr = " << nCr << endl;

    return 0;
}

