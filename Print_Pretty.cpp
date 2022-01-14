// Problem Name -- Print Pretty.

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout << nouppercase << showbase << setw(0);
        cout  << hex << (long long) A << endl;

        cout << setw(15) << right << fixed << setprecision(2) << showpos;
        cout.fill('_');
        cout  << B << endl;

        cout << noshowpos << uppercase << fixed << scientific << setprecision(9);
        cout  << C << endl;
	}
	return 0;

}