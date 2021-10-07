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

int main() {
	file();
	int t = 1;
	// cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<string> ans;
		ans.push_back("0");
		ans.push_back("1");
		for (int i = 2; i <= n; i++) {
			int sz = ans.size();
			for (int j = 0; j < sz; j++) {
				ans[j] = "0" + ans[j];
			}
			for (int j = sz - 1; j >= 0; j--) {
				string s = "1" + ans[j].substr(1);
				ans.push_back(s);
			}
		}
		for (int i = 0; i < ans.size(); i++) {
			cout << ans[i] << "\n";
		}
	}
	return 0;
}