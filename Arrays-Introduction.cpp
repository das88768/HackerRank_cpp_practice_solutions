// Problem Name - Arrays Introduction.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, i, *arr;
    //int *arr = new int(n);
    cin >> n;
    arr = new int[n];        // Dynamic memory allocation.
    //int arr[n];
    for(i=0;i<n;i++){
        cin >> arr[i];
    }

    for(i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }

    cout << endl;
    delete[] arr;
    return 0;
}

