#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        char lastchar = '0';
        string word;
        int state = 0;
        getline(cin, word);
        for (int j = 0; word[j] != '\0'; j++) {
            if (state == 1) {
                state = 0;
                break;
            }
            if (word[j] != lastchar) {
                lastchar = word[j];
                for (int k = 0; k < j; k++) {
                    // 이전에 알파벳이 나왔는지 계산
                    if (word[k] == word[j]) {
                        count -= 1;
                        state = 1;
                        break;
                    }
                }
            }
        }
    }
    cout << count;
}