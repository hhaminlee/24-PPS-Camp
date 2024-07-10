#include <iostream>
using namespace std;

int main() {
    string line;
    getline(cin, line);
    for (int i = 0; i < line.length(); i++) {
        if ((i + 1) % 10 == 0) {
            cout << line[i] << endl;
        } else
            cout << line[i];
    }
    return 0;
}