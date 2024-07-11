#include <iostream>
using namespace std;

int main() {
    int arr[8];
    string ans;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 7; i++) {
        if (arr[i] == arr[i + 1] - 1)
            ans = "ascending";
        else if (arr[i] == arr[i + 1] + 1)
            ans = "descending";
        else {
            ans = "mixed";
            break;
        }
    }
    cout << ans;
}