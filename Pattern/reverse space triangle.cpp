#include <iostream>
using namespace std;

int main() { 
    int column = 4;

    for (int i = 1; i <=column; i++) {
        // Print leading spaces
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }

        // Print numbers
        for (int k = 1; k <= column- i+1; k++) {
            cout << i;
        }

        cout << endl;
    }

    return 0;
}

