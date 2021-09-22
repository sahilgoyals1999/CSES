#include        <bits/stdc++.h>
#include        <ext/pb_ds/assoc_container.hpp>
#include        <ext/pb_ds/tree_policy.hpp>
#define ll      long long
#define ld      long double
#define inf     (long long)(LLONG_MAX)
#define mod     (int)(1e9+7)
#define ff      first
#define ss      second
#define pb(i)   push_back(i)
#define pp(i)   pop_back(i)
#define setb(x) __builtin_popcount(x)
#define ms(i,j) memset(i,j,sizeof(i))
#define FIO     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define w(t)    int t; cin>>t; while(t--)
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

bool comp(pair<int, int> &a, pair<int, int> &b) {
	if (a.ss == b.ss) return a.ff < b.ff;
	return a.ss < b.ss;
}

int main() {
	file();
	int n;
	cin >> n;
	vector<pair<int, int>> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i].ff >> v[i].ss;
	}
	sort(v.begin(), v.end(), comp);
	int ans = 1, endTime = v[0].ss;
	for (int i = 1; i < n; ++i) {
		if (v[i].ff >= endTime) {
			ans++;
			endTime = v[i].ss;
		}
	}
	cout << ans;
	return 0;
}