#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    int dp[15][15] = {0};

    for (int i = 0; i <= 14; i++) {
        dp[0][i] = i;
    }

    for (int i = 1; i <= 14; i++) {
        for (int j = 1; j <= 14; j++) {
            for (int h = 1; h <= j; h++)
                dp[i][j] += dp[i - 1][h];
        }
    }

    for (int i = 0; i < t; i++) {
        int k, n;
        cin >> k >> n;
        cout << dp[k][n] << endl;
    }

    return 0;
}
