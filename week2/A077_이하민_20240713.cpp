#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

struct Compare {
    bool operator()(const pair<int, int>& o1, const pair<int, int>& o2) const { return o1.first > o2.first; }
};

int main() {
    vector<pair<int, int> > aa(8);
    vector<int> bb(5);
    int sum = 0;

    for (int i = 0; i < 8; ++i) {
        cin >> aa[i].first;
        aa[i].second = i;
    }

    sort(aa.begin(), aa.end(), Compare());

    for (int i = 0; i < 5; ++i) {
        bb[i] = aa[i].second;
        sum += aa[i].first;
    }

    sort(bb.begin(), bb.end());

    cout << sum << "\n";
    for (int i = 0; i < 5; ++i) {
        cout << bb[i] + 1 << " ";
    }

    return 0;
}
