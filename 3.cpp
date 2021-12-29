// Problem Name - Basic Data Types.

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    long l;
    char ch;
    float num;
    double d;
    
    scanf("%d %ld %c %f %lf", &n, &l, &ch, &num, &d);
    printf("%d\n%ld\n%c\n%f\n%lf\n", n, l, ch, num, d);
    
    return 0;
}