#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << arr[0] << " ";
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) cout << arr[i] << " ";
    }
    delete[] arr;
    return 0;
}