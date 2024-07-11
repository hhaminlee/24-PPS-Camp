#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a;
    vector<int> b;
    int n, temp, ans = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a.push_back(temp);
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        b.push_back(temp);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end(), greater<int>());
    for (int i = 0; i < n; i++) {
        ans += a[i] * b[i];
    }
    cout << ans;
    return 0;
}