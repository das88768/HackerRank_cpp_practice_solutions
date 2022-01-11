// Problem Name -- Sets-STL.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

void solve(set<int>& s){
    int x, y;
    cin >> y >> x;
    if(y == 1){
        s.insert(x);
    }
    else if(y == 2){
        s.erase(x);
    }
    else if(y == 3){
        set<int>::iterator itr;
        itr = s.find(x);
        if(itr == s.end()){
            cout << "No" << endl;
        }else{
            cout << "Yes" << endl;
        }
    }
}

int main() {
    int no_q, i;
    //int x, y;
    set<int>s;
    cin >> no_q;
    for(i=0;i<no_q;i++){
        solve(s);
    }   
    return 0;
}
