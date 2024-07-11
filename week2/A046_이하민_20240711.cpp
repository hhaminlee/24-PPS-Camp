#include <iostream>
using namespace std;

int main() {
    int firstName[26] = {0}, n;
    string line, ans;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        firstName[line[0] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (firstName[i] >= 5)
            ans += (char)(i + 'a');
    }
    if (ans == "") {
        cout << "PREDAJA";
    } else
        cout << ans;
    return 0;
}