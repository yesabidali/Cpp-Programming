#include <iostream>
using namespace std;

int main() { 
    int column = 4;

    for (int i = 1; i <= column; i++) {
        // Print leading spaces
        for (int j = 1; j <= column - i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int k = 1; k <= i; k++) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

