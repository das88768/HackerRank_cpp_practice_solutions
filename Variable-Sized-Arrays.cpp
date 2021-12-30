// Problem Name - Variable Sized Arrays.

#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int n, q, i, j, k;
    int r, c;
    //cout << "Enter the value of 'n' and 'q': \n";
    cin >> n >> q;

    vector<vector<int> > arr(n);
    vector<int>v;
    for(i=0;i<n;i++){
        //cout << "Enter the size of the array and elements of the array: \n";
        cin >> k;
        arr[i].resize(k);
        
        //cout << "Enter the elements: \n"; 
        for(j=0;j<k;j++){
            cin >> arr[i][j];
        }
    }

    for(i=0;i<q;i++){
        //cout << "Enter the row and coloumn: ";
        cin >> r >> c;

        v.push_back(arr[r][c]);
    }

    for(i=0;i<q;i++){
        cout << v[i] << endl;
    }

    return 0;
}