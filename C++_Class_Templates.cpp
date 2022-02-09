// Problem Name -- C++ Class Templates.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;
#include <ios>

/*Write the class AddElements here*/
template <class T>
class AddElements{
    T element1;
    public:
        AddElements(T obj){
            element1 = obj;
        }
        T add(T element2){
            return (element1+=element2);
        }
};

template <>
class AddElements <string>{
    string str;
    public:
        AddElements(string s){
            str = s;
        }
        string concatenate(string str2){
            return (str+=str2);
        }
};

int clr_memory() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
int static r = clr_memory();
#define endl '\n';

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
