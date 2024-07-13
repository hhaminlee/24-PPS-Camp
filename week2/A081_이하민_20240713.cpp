#include <algorithm>
#include <iostream>
using namespace std;

bool compare(int a, int b) { return a > b; }
int main() {
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[j];
        }
        sort(arr, arr + 10, compare);
        cout << arr[2] << endl;
    }
    return 0;
}