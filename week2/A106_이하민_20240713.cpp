#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    int al[26] = {0};
    string line;

    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        fill(begin(al), end(al), 0);
        sum = 0;
        getline(cin, line);
        for (int j = 0; j < line.length(); j++) {
            al[line[j] - 'A']++;
        }
        for (int k = 0; k < 26; k++) {
            if (al[k] == 0) sum += k + 65;
        }
        cout << sum << endl;
    }
    return 0;
}