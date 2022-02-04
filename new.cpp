#include <bits/stdc++.h>
#include <array>
using namespace std;

int main() {
    
    const int MAX_ARRAY_SIZE = 100;

    array<string, MAX_ARRAY_SIZE> listNums;
    string userNums;
    cout << "Enter a list of integers (ex. 1, 2, 3, 4): ";
    getline(cin, userNums);
    //string str = "1, 2, 3, 4";
    vector<string> v;

    stringstream ss(userNums);

    while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        v.push_back(substr);
    }

    for (size_t i = 0; i < v.size(); i++)
        listNums.push_back(v[i]);
        cout << listNums;
}
