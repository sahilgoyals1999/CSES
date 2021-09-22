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

map<string, bool> mp;

void solve(string &s, int ind) {
	if (ind >= s.length()) {
		mp[s] = true;
		return;
	}
	for (int i = ind; i < s.length(); ++i) {
		swap(s[i], s[ind]);
		solve(s, ind + 1);
		swap(s[i], s[ind]);
	}
}

int main() {
	file();
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	solve(s, 0);
	cout << mp.size() << "\n";
	for (auto p : mp) {
		cout << p.ff << "\n";
	}
	return 0;
}