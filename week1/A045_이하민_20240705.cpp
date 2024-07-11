#include <iostream>
using namespace std;

int main() {
    int result[26] = {0}, max = 0, size;
    string line, c;
    getline(cin, line);
    size = line.length();
    for (int i = 0; i < size; i++) {
        if (line[i] >= 'a')
            result[line[i] - 'a']++;
        else
            result[line[i] - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (result[i] == max)
            c = "?";
        else if (result[i] > max) {
            max = result[i];
            c = 'A' + i;
        }
    }
    cout << c;
    return 0;
}