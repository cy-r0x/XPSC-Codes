#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define endl '\n'
#define yes cout << Yes << endl
#define no cout << No << endl

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	int crr = 0;

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		crr ^= vec[i];
	}

	int mn = crr;

	for (int i = 0; i < n; i++) {
		int val = crr ^ vec[i];
		mn = min(mn, val);
	}

	cout << mn << endl;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}

