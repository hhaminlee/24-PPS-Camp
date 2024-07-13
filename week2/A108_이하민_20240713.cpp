#include <algorithm>
#include <iostream>
using namespace std;
bool isPalindrome(int num) {
    string str = to_string(num);
    string revS = str;
    reverse(revS.begin(), revS.end());
    return str == revS;
}
int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s = to_string(n);
        string revN = s;
        reverse(revN.begin(), revN.end());

        int r = stoi(revN);
        int sum = n + r;

        if (isPalindrome(sum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}