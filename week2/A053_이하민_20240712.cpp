#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int main(){
    int n, val;
    string command;
    vector<int> v;
    cin >> n;
    cin.ignore();
    for(int i=0; i<n; i++){
        getline(cin, command);
        istringstream iss(command);
        iss >> command >> val;
        if(command == "push"){
            v.push_back(val);
        }
        else if(command == "top"){
            if(v.size() == 0)
                cout << "-1" << endl;
            else 
                cout << v[v.size()-1] <<endl;
        }
        else if(command == "pop"){
            if(v.size() == 0)
                cout << "-1" << endl;
            else {
                int temp = v[v.size()-1];
                v.pop_back();
                cout << temp <<endl;
            }
        }
        else if(command == "empty"){
            if(v.size() == 0)
                cout << "1" << endl;
            else 
                cout << "0" << endl;
        }
        else if(command == "size")
            cout << v.size() << endl;
    }
    return 0;
}