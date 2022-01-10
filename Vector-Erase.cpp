// Problem Name -- Vector-Erase.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void first_erase(int fq, vector<int>& vt){
    vt.erase(vt.begin()+fq-1);
}

void second_erase(vector<int>& vt){
    int a, b;
    cin >> a >> b;
    vt.erase(vt.begin()+a-1, vt.begin()+b-1);
}

int main() {
    int n, num, i;
    int fq;
    vector<int>vt;
    
    cin >> n;
    for(i=0; i<n; i++){
        cin >> num;
        vt.push_back(num);
    }
    cin >> fq;
    first_erase(fq, vt);  
    second_erase(vt);
    
    cout << vt.size() << endl;
    for(i=0; i<vt.size(); i++){
        cout << vt.at(i) << " ";
    }
    cout << endl;
    
    return 0;
}
