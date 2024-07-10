#include <iostream>
#include <sstream>
#include <string>
using namespace std;

double mathOperation(double n, string &op) {
    for (char op : op) {
        if (op == '@') {
            n *= 3;
        } else if (op == '%') {
            n += 5;
        } else if (op == '#') {
            n -= 7;
        }
    }
    return n;
}
int main() {
    int t;
    double num;
    string line;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        getline(cin, line);
        istringstream iss(line);
        iss >> num;

        string operation;
        while (iss >> operation) {
            num = mathOperation(num, operation);
        }
        printf("%.2f\n", num);
    }

    return 0;
}