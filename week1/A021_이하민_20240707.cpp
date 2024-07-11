#include <iostream>
using namespace std;

int main() {
    int n, plug, sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> plug;
        sum += plug;
    }
    sum -= n - 1;
    cout << sum;
    return 0;
}