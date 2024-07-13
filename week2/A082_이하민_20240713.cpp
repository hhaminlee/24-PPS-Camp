#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// �� �Լ� ����
bool compare(const pair<pair<int, int>, string>& a, const pair<pair<int, int>, string>& b) {
    if (a.first.first == b.first.first) {
        return a.first.second < b.first.second;  // �Է� ������ �������� ����
    }
    return a.first.first < b.first.first;  // ���̸� �������� ����
}

int main() {
    int n;
    cin >> n;
    vector<pair<pair<int, int>, string> > ans(n);

    for (int i = 0; i < n; i++) {
        cin >> ans[i].first.first >> ans[i].second;
        ans[i].first.second = i;  // �Է� ���� ����
    }

    // ���̸� �������� �����ϰ�, ���̰� ������ �Է� ������ �������� ����
    sort(ans.begin(), ans.end(), compare);

    for (vector<pair<pair<int, int>, string> >::iterator it = ans.begin(); it != ans.end(); it++) {
        cout << it->first.first << " " << it->second << "\n";
    }

    return 0;
}
