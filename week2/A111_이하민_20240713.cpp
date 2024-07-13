#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int calculateInitialPassengers(int k) {
    int passengers = 0;
    for (int i = 0; i < k; i++) {
        passengers = (passengers * 2) + 1;
    }
    return passengers;
}

int main() {
    int testCases;
    cin >> testCases;
    vector<int> results;

    for (int i = 0; i < testCases; i++) {
        int k;
        cin >> k;
        results.push_back(calculateInitialPassengers(k));
    }

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
