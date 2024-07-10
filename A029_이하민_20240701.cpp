#include <iostream>
using namespace std;
// 1 2 3 4 5 6 7 8
// 0 1 0 1 0 1 0 1
// 1 0 1 0 1 0 1 0
int main() {
    int n, first;
    cin >> n >> first;

    if (n < 6) {
        for (int i = 0; i < n - 1; i++) {
            first = 1 - first; // 0과 1을 교대로 출력
            cout << first << endl;
        }
    } else {
        cout << "Love is open door";
    }

    return 0;
}
