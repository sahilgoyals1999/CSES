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

int solve(int a[], int n, int ind, int x, vector<vector<int>> &dp) {
	if (x == 0) return 0;
	if (ind >= n) return INT_MAX - 1;
	if (dp[ind][x] != -1) {
		return dp[ind][x];
	}
	if (a[ind] <= x) {
		int notPick = solve(a, n, ind + 1, x, dp);
		int pick = 1 + solve(a, n, ind, x - a[ind], dp);
		return dp[ind][x] = min(notPick, pick);
	}
	return dp[ind][x] = solve(a, n, ind + 1, x, dp);
}

int main() {
	file();
	int n, x;
	cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	vector<vector<int>> dp(n + 1, vector<int>(x + 1, -1));
	int ans = solve(a, n, 0, x, dp);
	if ((ans == INT_MAX - 1) || (ans == INT_MAX)) {
		cout << "-1";
	}
	else {
		cout << ans;
	}
	return 0;
}