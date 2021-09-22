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

bool isPossible(string &s) {
	int n = s.length();
	int l = 0, r =  n - 1, odd = -1;
	vector<int> count(26, 0);
	for (int i = 0; i < n; ++i) {
		count[s[i] - 'A']++;
	}
	for (int i = 0; i < 26; ++i) {
		while (l < r && count[i] > 1) {
			s[l++] = (char)('A' + i);
			s[r--] = (char)('A' + i);
			count[i] -= 2;
		}
		if (count[i] == 1 && odd == -1) {
			odd = i;
		}
	}
	if (n % 2 == 1 && odd != -1) {
		s[l] = (char)('A' + odd);
		l++;
	}
	return (l > r);
}

int main() {
	file();
	string s;
	cin >> s;
	if (!isPossible(s)) {
		cout << "NO SOLUTION";
	}
	else {
		cout << s;
	}
	return 0;
}