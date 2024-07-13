#include <iostream>
using namespace std;

int main(){
    int n, sum = 1, result = 0;
    cin >> n;
    cin.ignore();
    string ox;
    for(int i=0; i<n; i++){
        result = 0;
        sum = 0;
        getline(cin, ox);
        for(int j=0; j<ox.length(); j++){
            if(ox[j] == 'O'){
                sum ++;
                
            }
            else if(ox[j] == 'X')
                sum = 0;
            result += sum;
        }
        cout << result << endl;
    }
    return 0;
}