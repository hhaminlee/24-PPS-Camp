#include <iostream>
using namespace std;

int main() {
    int num[5], ans, sum = 0;

    for (int i = 0; i < 5; i++) {
        cin >> num[i];
        sum += num[i] * num[i];
    }
    ans = sum % 10;
    cout << ans;
    return 0;
}