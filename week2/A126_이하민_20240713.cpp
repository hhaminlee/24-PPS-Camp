#include <iostream>
using namespace std;

int main() {
    int aa;
    cin >> aa;
    int* ans = new int[6];
    int i = 0, count = 0;

    for (int j = 1; j <= aa; j++) {
        if (j < 100)
            count++;
        else if (j == 1000)
            count = 144;
        else {
            ans[0] = j % 10;
            ans[1] = j / 10 % 10;
            ans[2] = j / 100 % 10;
            i++;
            if ((ans[0] - ans[1]) == (ans[1] - ans[2])) count++;
        }
    }
    cout << count;
    delete[] ans;
    return 0;
}