#include <iostream>
using namespace std;

void printHollowDiamond(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) {
            if (j == 0 || j == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    for (int i = n - 2; i > 0; i--) {
        for (int j = 0; j < n - i; j++)
            cout << " ";
        for (int j = 0; j < 2 * i - 1; j++) {
            if (j == 0 || j == 2 * i - 2)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }
}

int main() {
    int size = 10#include <iostream>
    using namespace std;
    
    void printHollowDiamondWithDiagonals(int n) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n - i; j++)
                cout << " ";
            for (int j = 0; j < 2 * i - 1; j++) {
                if (j == 0 || j == 2 * i - 2 || i == j || i == 2 * i - 2 - j)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    
        for (int i = n - 2; i > 0; i--) {
            for (int j = 0; j < n - i; j++)
                cout << " ";
            for (int j = 0; j < 2 * i - 1; j++) {
                if (j == 0 || j == 2 * i - 2 || i == j || i == 2 * i - 2 - j)
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
    };
    printHollowDiamond(size);
    return 0;
}