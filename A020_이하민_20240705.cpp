#include <iostream>
using namespace std;

int main() {
    int in, out, sum = 0, max = 0;
    for (int i = 0; i < 4; i++) {
        cin >> out >> in;
        sum += in - out;
        if (max < sum)
            max = sum;
    }
    cout << max;
    return 0;
}