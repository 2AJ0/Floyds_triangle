/*
 * Floyd's Triangle
 * ------------------
 * Logic: We keep a single running counter starting at 1.
 * For row i (1 to numRows), we print i numbers, incrementing
 * the counter after every number printed. This naturally produces
 * consecutive natural numbers arranged in a right-angled triangle.
 */

#include <iostream>
#include <iomanip>
using namespace std;

void printFloydsTriangle(int numRows) {
    int counter = 1;

    for (int i = 1; i <= numRows; i++) {
        for (int j = 1; j <= i; j++) {
            cout << setw(4) << counter;
            counter++;
        }
        cout << "\n";
    }
}

int main() {
    int numRows;

    cout << "Enter number of rows: ";
    cin >> numRows;

    if (numRows <= 0) {
        cout << "Number of rows must be positive." << endl;
        return 1;
    }

    printFloydsTriangle(numRows);

    return 0;
}
