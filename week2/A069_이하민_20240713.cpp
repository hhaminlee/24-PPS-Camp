#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    queue<int> q;
    
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }

    cout << "<";
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j < k; ++j) {
            q.push(q.front());
            q.pop();
        }
        if (q.size() == 1)
            cout << q.front() << ">";
        else
            cout << q.front() << ", ";
        q.pop();
    }

    return 0;
}
