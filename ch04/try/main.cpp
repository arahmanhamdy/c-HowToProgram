#include <iostream>

using namespace std;

int main() {
    int x = 7;
    int y = 4;
    cout << "Hello, World!" << endl;
    if (x > 5) {
        if (y > 5)
            cout << "x and y are > 5";
    }
    else
        cout << "x is <= 5";
    return 0;
}