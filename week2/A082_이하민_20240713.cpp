#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 비교 함수 정의
bool compare(const pair<pair<int, int>, string>& a, const pair<pair<int, int>, string>& b) {
    if (a.first.first == b.first.first) {
        return a.first.second < b.first.second;  // 입력 순서를 기준으로 정렬
    }
    return a.first.first < b.first.first;  // 나이를 기준으로 정렬
}

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, string> > ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i].first.first >> ans[i].second;
        ans[i].first.second = i;  // 입력 순서 저장
    }

    // 나이를 기준으로 정렬하고, 나이가 같으면 입력 순서를 기준으로 정렬
    sort(ans.begin(), ans.end(), compare);

    for (vector<pair<pair<int, int>, string> >::iterator it = ans.begin(); it != ans.end(); it++) {
        cout << it->first.first << " " << it->second << "\n";
    }

    return 0;
}
