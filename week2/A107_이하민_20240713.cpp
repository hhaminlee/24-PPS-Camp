#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int arr[2000];
    for (int i = 0; i < 45; i++) {
        for (int j = 0; j <= i; j++) {
            arr[sum] = i + 1;
            sum++;
        }
    }

    int a, b, ans = 0;
    cin >> a >> b;
    for (int i = a - 1; i <= b - 1; i++) {
        ans += arr[i];
    }
    cout << ans;
    return 0;
}