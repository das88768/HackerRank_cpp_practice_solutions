// Problem Name -- Vector-Sort.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>vt;
    int n, i, num;
    cin >> n;
    for(i=0; i<n; i++){
        cin >> num;
        vt.push_back(num);
    }
    sort(vt.begin(), vt.end());
    for(i=0; i<vt.size(); i++){
        cout << vt.at(i) << " ";
    }
    cout << endl;
    return 0;
}