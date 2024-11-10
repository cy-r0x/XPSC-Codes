#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define endl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> h(26, 0);
	string str;
	cin >> str;

	for (char ch : str) {
		h[ch - 'a']++;
	}

	int odd = 0;
	for (int it : h) {
		odd += (it & 1);
	}

	if (odd - 1 <= k) yes;
	else no;

}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}

