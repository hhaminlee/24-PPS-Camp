#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    int digit[10] = {
        0,
    };

    cin >> a >> b >> c;
    string ans = to_string(a * b * c);
    for (int i = 0; i < ans.length(); i++) {
        digit[ans[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) {
        cout << digit[i] << endl;
    }
    return 0;
}