#include <iostream>
using namespace std;

int main() {
    long long int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            if (i == 2) {
                cout << "2" << endl;
                n /= 2;
            }
            if (i == 3) {
                cout << "3" << endl;
                n /= 3;
            }
            if (i != 2 && i != 3) {
                cout << i << endl;
                n /= i;
            }
            i = 1;
        }
    }
    return 0;
}