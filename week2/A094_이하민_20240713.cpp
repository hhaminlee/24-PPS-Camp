#include <iostream>
using namespace std;

int main() {
    string cro;
    int result = 0;
    getline(cin, cro);
    int len = cro.length();

    for (int i = 0; i < len; i++) {
        result++;
        if (cro[i] == 'c' && (cro[i + 1] == '=' || cro[i + 1] == '-'))
            i++;
        else if (cro[i] == 'd') {
            if (cro[i + 1] == 'z' && cro[i + 2] == '=')
                i += 2;
            else if (cro[i + 1] == '-')
                i++;
        } else if ((cro[i] == 'l' && cro[i + 1] == 'j') || (cro[i] == 'n' && cro[i + 1] == 'j'))
            i++;
        else if ((cro[i] == 's' && cro[i + 1] == '=') || (cro[i] == 'z' && cro[i + 1] == '='))
            i++;
    }

    cout << result;
    return 0;
}