// Problem Name -- Lower Bound-STL.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void bounding_func(int num, vector<int> vt){
    int i;
    vector<int>::iterator ans;
    for(i=0;i<num;i++){
        int q, index;
        cin >> q;
        ans = lower_bound(vt.begin(), vt.end(), q);
        index = (ans-vt.begin());
        if(q == vt.at(index)){
            cout << "Yes " << index+1 << endl;
        }else{
            cout << "No " << index+1 << endl;
        }
    }
}

int main() {
    int n, i;
    int num, no_q;
    vector<int>vt;
    vector<int>::iterator ans;
    cin >> n;
    for(i=0;i<n;i++){
        cin >> num;
        vt.push_back(num);
    }
    
    cin >> no_q;
    bounding_func(no_q, vt);

    return 0;
}
