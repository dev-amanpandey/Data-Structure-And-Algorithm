#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate factorial
unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate nCr (n choose r)
unsigned long long nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

void printPascalTriangle(int rows) {
    for (int i = 0; i < rows; i++) {
        // Print spaces for alignment
        cout << setw(rows - i) << " ";
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}

int main() {
    int numRows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> numRows;

    printPascalTriangle(numRows);

    return 0;
}
