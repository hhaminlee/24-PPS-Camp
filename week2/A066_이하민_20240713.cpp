#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b){
    return a > b;
} 

int main(){
    string line;
    getline(cin, line);
    int* sortLine = new int[line.length()];

    for(int i=0; i<line.length(); i++){
        sortLine[i] = line[i]-'0';
    }
    sort(sortLine, sortLine+line.length(), compare);
    for(int i=0; i<line.length(); i++){
        cout << sortLine[i];
    }
    return 0;
}