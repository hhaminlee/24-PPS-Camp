#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


struct Compare {
    bool operator()(const pair<int, int>& o1, const pair<int, int>& o2) const {
        if (o1.first == o2.first) {
            return o1.second < o2.second;
        }
        return o1.first < o2.first;
    }
};

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > aa(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> aa[i].first >> aa[i].second;
    }

    sort(aa.begin(), aa.end(), Compare());

    for (int i = 0; i < n; ++i) {
        cout << aa[i].first << " " << aa[i].second << "\n";
    }

    return 0;
}
