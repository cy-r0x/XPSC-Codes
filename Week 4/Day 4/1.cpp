#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define endl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

using namespace std;

void solve() {
	int64_t n, s;
	cin >> n >> s;

	vector<int64_t> pre = {0};
	int64_t x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		pre.push_back(pre.back() + x);
	}

	int64_t ans = 0;
	int64_t l = 1, r = 1;
	while (r < pre.size()) {
		if (pre[r] - pre[l - 1] <= s) {
			ans = max(ans, r - l + 1);
			r++;
		} else {
			l++;
		}
	}
	cout << ans << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}

