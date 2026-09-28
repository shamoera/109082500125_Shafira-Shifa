#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
    cout << "output:" << endl;

    for (int j = 0; j <= n; j++) {
        int sisa = n - j;

        for (int s = 0; s < j; s++) cout << " ";

        for (int k = sisa; k >= 1; k--) cout << k;
        cout << "*";
        for (int k = 1; k <= sisa; k++) cout << k;

        cout << endl;
    }

    return 0;
}