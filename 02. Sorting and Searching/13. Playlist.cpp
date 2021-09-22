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

int main() {
	file();
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int i = 0, j = 0, ans = 0;
	map<int, int> mp;
	while (j < n) {
		mp[a[j]]++;
		if (j - i + 1 == mp.size()) {
			ans = max(ans, j - i + 1);
		}
		else {
			while (i < j && ((j - i + 1) != mp.size())) {
				mp[a[i]]--;
				if (mp[a[i]] == 0) {
					mp.erase(a[i]);
				}
				i++;
			}
		}
		j++;
	}
	cout << ans;
	return 0;
}