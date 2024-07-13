#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    string* ans = new string[line.length()];

    for (int i = 0; i < line.length(); i++) {
        ans[i] = line.substr(i, line.length());
    }
    sort(ans, ans + ans->size());

    for (int i = 0; i < line.length(); i++) {
        cout << ans[i] << endl;
    }
    delete[] ans;
    return 0;
}