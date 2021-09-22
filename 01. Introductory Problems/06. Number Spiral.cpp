#include        <bits/stdc++.h>
#include        <ext/pb_ds/assoc_container.hpp>
#include        <ext/pb_ds/tree_policy.hpp>
#define ll      long long
#define ld      long double
#define inf     (long long)(1e18)
#define mod     (int)(1e9+7)
#define ff      first
#define ss      second
#define pb(i)   push_back(i)
#define pp(i)   pop_back(i)
#define w(t)    int t; cin>>t; while(t--)
#define FIO    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
using namespace __gnu_pbds;
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void file() {
	FIO
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}


int main() {
	file();
	w(t) {
		long long y, x, s;
		cin >> y >> x;
		if (y >= x) {
			if (y % 2 == 0) {
				s = y * y;
				cout << s - (x - 1) << "\n";
			}
			else {
				s = (y - 1) * (y - 1) + 1;
				cout << s + (x - 1) << "\n";
			}
		}
		else {
			if (x % 2 == 1) {
				s = x * x;
				cout << s - (y - 1) << "\n";
			}
			else {
				s = (x - 1) * (x - 1) + 1;
				cout << s + (y - 1) << "\n";
			}
		}
	}
	return 0;
}