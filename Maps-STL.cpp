// Problem Name -- Maps-STL.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

void correct_answer_sheet(map<string, int>& m, int q, string name){
    int marks;
    map<string, int>::iterator itr;
    if(q == 1){
        cin >> marks;
        m[name] = m[name] + marks;
    }
    else if(q == 2){
        m.erase(name);
    }
    else if(q == 3){
        itr = m.find(name);
        if(itr == m.end()){
            cout << 0 << endl;
        }else{
            cout << m[name] << endl;
        }
    }
}

int main() {
    int no_q, i, q;
    string name;
    map<string, int>m;

    cin >> no_q;
    for(i=0;i<no_q;i++){
        cin >> q >> name;
        correct_answer_sheet(m, q, name);
    }
    return 0;
}
