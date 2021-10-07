#include <bits/stdc++.h>
typedef long long ll;
#define inf (long long)(LLONG_MAX)
#define mod (int)(1e9+7)
#define ff first
#define ss second
using namespace std;

void file() {
	ios_base::sync_with_stdio(0); cin.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void solve(int n, int a, int b, int c, vector<vector<int>> &ans) {
	if (n == 1) {
		ans.push_back({a, c});
		return;
	}
	solve(n - 1, a, c, b, ans);
	ans.push_back({a, c});
	solve(n - 1, b, a, c, ans);
}

int main() {
	file();
	int t = 1;
	// cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<vector<int>> ans;
		solve(n, 1, 2, 3, ans);
		cout << ans.size() << "\n";
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i][0] << " " << ans[i][1] << "\n";
		}
	}
	return 0;
}