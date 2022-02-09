// Problem Name -- Preprocessor Solution.

#define INF 0
#define foreach(v, i) for (int i=0; i<v.size(); i++)
#define io(v) cin >> v
#define FUNCTION(minmax, pre) void minmax(int& a, int b){if(!(a pre b)) a=b; else a!=b;}
#define toStr(txt) #txt

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif 

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main(){
	int n; cin >> n;
	vector<int> v(n);
	foreach(v, i) {
		io(v)[i];
	}
	int mn = INF;
	int mx = -INF;
	foreach(v, i) {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}