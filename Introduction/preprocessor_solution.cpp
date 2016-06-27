// HackerRank link: https://www.hackerrank.com/challenges/preprocessor-solution

/* Enter your macros here */
#define INF (unsigned)(~0)
#define io(v) cin>>v
#define toStr(s) #s
#define foreach(v, i) for(unsigned int i = 0; i < v.size(); i++)
#define FUNCTION(f_name, cur_op) inline void f_name(int &var1, int var2){(var1 cur_op var2)?:var1=var2;}

////////////
// STUB CODE
////////////
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
    cout << "Yolo!";
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}
	int ans = mx - mn;
	cout << toStr(Result =) <<' '<< ans;
	return 0;

}
