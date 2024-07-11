#include <cmath>
#include <iostream>
using namespace std;

int main() {
    string roomNum;
    int max = 0;
    cin >> roomNum;
    int num[10] = {
        0,
    };
    for (int i = 0; i < roomNum.length(); i++) {
        num[roomNum[i] - '0']++;
    }
    num[6] = ceil((num[6] + num[9]) / 2.0);
    num[9] = 0;
    for (int i = 0; i < 10; i++) {
        if (num[i] > max)
            max = num[i];
    }
    cout << max;
    return 0;
}