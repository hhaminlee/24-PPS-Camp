#include <iostream>
using namespace std;

int main() {
    int score[5] = {0}, temp, max = 0, max_i;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> temp;
            score[i] += temp;
        }
        if (score[i] > max) {
            max = score[i];
            max_i = i + 1;
        }
    }
    cout << max_i << " " << max;

    return 0;
}