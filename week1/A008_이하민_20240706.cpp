#include <iostream>
using namespace std;

int main() {
    int c, n, count = 0, sum = 0;
    double avg;
    cin >> c;
    for (int i = 0; i < c; i++) {
        sum = 0;
        count = 0;
        cin >> n;
        int *student = new int[n];
        for (int j = 0; j < n; j++) {
            cin >> student[j];
            sum += student[j];
        }

        avg = sum / n;
        for (int k = 0; k < n; k++) {
            if (student[k] > avg)
                count++;
        }
        printf("%.3f%%\n", (double)count / n * 100);
    }
}