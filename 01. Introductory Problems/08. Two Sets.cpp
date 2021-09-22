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
	ll n;
	cin >> n;
	ll sum = n * (n + 1) / 2;
	if (sum % 2 == 1) {
		cout << "NO";
	}
	else {
		cout << "YES\n";
		vector<ll> ans1;
		ll i = 1, j = n, s = sum / 2;
		while (s > 0) {
			ans1.pb(j);
			s -= j;
			j--;
			if (s == 0) break;
			ans1.pb(i);
			s -= i;
			i++;
		}
		cout << ans1.size() << "\n";
		for (int i = 0; i < ans1.size(); ++i) {
			cout << ans1[i] << " ";
		}
		cout << "\n";
		cout << j - i + 1 << "\n";
		while (i <= j) {
			cout << i << " ";
			i++;
		}
	}
	return 0;
}