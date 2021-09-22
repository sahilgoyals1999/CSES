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

ll powerMod(ll x, ll y) {
	if (x == 1) return 1;
	if (y == 1) return x;
	ll tmp = powerMod(x, y / 2);
	tmp = (tmp * tmp) % mod;
	if (y % 2 == 1) {
		tmp = (x * tmp) % mod;
	}
	return tmp;
}

int main() {
	file();
	ll n;
	cin >> n;
	cout << powerMod(2, n);
	return 0;
}