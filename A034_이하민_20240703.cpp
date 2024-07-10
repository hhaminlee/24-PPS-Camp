#include <iostream>
using namespace std;

int main() {
    int ans[42] = {0}, temp, count = 0;
    for (int i = 0; i < 10; i++) {
        cin >> temp;
        ans[temp % 42]++;
    }
    for (int i = 0; i < 42; i++) {
        if (ans[i] != 0 || ans[i] == 1)
            count++;
    }
    cout << count;
    return 0;
}