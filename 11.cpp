// Problem Name - StringStream.

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	
    vector<int> vt;
    stringstream my_ss(str);
    char ch;
    int temp;
    while(my_ss >> temp){
        vt.push_back(temp);
        my_ss >> ch;
    }
    return vt;
}

int main() {
    string str;
    //cout << "Enter integers seperated by commas: ";
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}