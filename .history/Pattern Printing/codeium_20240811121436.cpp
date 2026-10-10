#include <iostream>
using namespace std;

void printHollowDiamondWithDiagonals(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i || i == 0 || i == n - 1 || j == i || j == 2 * i - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = n - 2; i >= 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) {
            if (j == 0 || j == 2 * i || i == 0 || i == n - 1 || j == i || j == 2 * i - j)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int size = 5;
    printHollowDiamondWithDiagonals(size);
    return 0;
}