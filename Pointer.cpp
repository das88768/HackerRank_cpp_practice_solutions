// Problem Name - Pointer.
#include <iostream>
#include <cstdlib>
using namespace std;

void update(int *a,int *b) {
    int x, y;   
    x = *a + *b;
    y = (*a - *b);
    *a = x;
    if(y < 0){
        y = -(y);
    }
    *b = y;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;
    update(pa, pb);
    cout << a << "\n" << b << endl;

    return 0;
}