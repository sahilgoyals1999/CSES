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

int n, m;
char a[1000][1000];
int dx[4] = {0, 0, -1, 1};
int dy[4] = { -1, 1, 0, 0};

void solve(int i, int j) {
	if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == '#') return;
	a[i][j] = '#';
	for (int ind = 0; ind < 4; ind++) {
		solve(i + dx[ind], j + dy[ind]);
	}
}

int main() {
	file();
	int t = 1;
	// cin >> t;
	while (t--) {
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
			}
		}
		int ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (a[i][j] == '.') {
					ans++;
					solve(i, j);
				}
			}
		}
		cout << ans;
	}
	return 0;
}