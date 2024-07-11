#include <climits>
#include <iostream>
using namespace std;

int main() {
    int m = 0, y = 0, n, fee, min = INT_MAX, flag = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> fee;
        y += (fee / 30 + 1) * 10; // 30분마다 10원
        m += (fee / 60 + 1) * 15; // 60분마다 15원
    }
    if (y < m) {
        cout << "Y " << y << endl;
    } else if (m < y) {
        cout << "M " << m << endl;
    } else {
        cout << "Y M " << y << endl;
    }
    return 0;
}