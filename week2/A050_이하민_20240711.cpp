#include <iostream>
using namespace std;

int main() {
    string line, ans;
    int alpa[26] = {0};
    getline(cin, line);
    ans.resize(line.length());
    for (int i = 0; i < line.length(); i++) {
        if ((line[i] - 'A' - 3) >= 0) {
            ans[i] = (char)((line[i] - 'A' - 3) + 'A');
        } else {
            ans[i] = (char)((line[i] - 'A' - 3) + 'A' + 26);
        }
    }
    cout << ans;
    return 0;
}