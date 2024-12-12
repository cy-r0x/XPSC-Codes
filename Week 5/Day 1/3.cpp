#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<Yes<<endl
#define no cout<<No<<endl

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &it : vec) {
		cin >> it;
	}

	for (int i = 0; i < (1 << 8); i++) {
		int crr = 0;
		for (int j = 0; j < n; j++) {
			crr ^= (vec[j] ^ i);
		}
		if (crr == 0) {
			cout << i << endl;
			return;
		}
	}
	cout << -1 << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
