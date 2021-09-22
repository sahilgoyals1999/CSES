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
	int n;
	cin >> n;
	if (n == 2 || n == 3) {
		cout << "NO SOLUTION";
	}
	else {
		for (int i = 2; i <= n; i += 2) {
			cout << i << " ";
		}
		for (int i = 1; i <= n; i += 2) {
			cout << i << " ";
		}
	}
	return 0;
}