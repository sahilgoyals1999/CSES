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
int vis[1000][1000];

class Node {
public:
	int x, y;
	string res;

	Node(int _x, int _y, string _res) {
		x = _x;
		y = _y;
		res = _res;
	}
};

bool isSafe(int i, int j) {
	if (i < 0 || j < 0 || i >= n || j >= m || a[i][j] == '#' || vis[i][j] == 1) return false;
	return true;
}

int main() {
	file();
	int t = 1;
	// cin >> t;
	while (t--) {
		int sx, sy;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> a[i][j];
				if (a[i][j] == 'A') {
					sx = i;
					sy = j;
				}
			}
		}
		string ans = "";
		queue<Node> q;
		q.push(Node(sx, sy, ""));
		vis[sx][sy] = 1;
		while (!q.empty()) {
			int sz = q.size();
			while (sz--) {
				auto tp = q.front();
				int i = tp.x;
				int j = tp.y;
				string res = tp.res;
				q.pop();
				if (a[i][j] == 'B') {
					ans = res;
					break;
				}
				if (isSafe(i, j - 1)) {
					vis[i][j - 1] = 1;
					q.push(Node(i, j - 1, res + "L"));
				}
				if (isSafe(i, j + 1)) {
					vis[i][j + 1] = 1;
					q.push(Node(i, j + 1, res + "R"));
				}
				if (isSafe(i - 1, j)) {
					vis[i - 1][j] = 1;
					q.push(Node(i - 1, j, res + "U"));
				}
				if (isSafe(i + 1, j)) {
					vis[i + 1][j] = 1;
					q.push(Node(i + 1, j, res + "D"));
				}
			}
			if (ans.length() > 0) {
				break;
			}
		}
		if (ans.length() > 0) {
			cout << "YES\n" << ans.length() << "\n" << ans;
		}
		else {
			cout << "NO";
		}
	}
	return 0;
}