#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, k, q;
	cin >> n >> k >> q;
	// vector<int> vec(n);
	int x;
	vector<int> pos;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		if (x <= q) pos.push_back(i);
	}
	if (!pos.size()) {
		cout << 0 << endl;
		return;
	}
	int64_t sum = 0;
	int cnt = 0;
	for (int i = 0; i < pos.size() - 1; i++) {
		if (pos[i] + 1 == pos[i + 1]) {
			cnt++;
		}
		else {
			cnt++;
			if (cnt >= k) sum += (1LL * (cnt - k + 1) * (cnt - k + 2)) / 2;
			cnt = 0;
		}
	}
	cnt++;
	if (cnt >= k) sum += (1LL * (cnt - k + 1) * (cnt - k + 2)) / 2;
	cout << sum << endl;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
