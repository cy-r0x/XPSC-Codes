#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	vector<int> pos;
	for (int i = 1; i <= n; i++) {
		if (str[i - 1] == 'B') pos.push_back(i);
	}
	int idx = 0;
	int cnt = 0;

	auto f = [&](int i) {
		int l = 0, r = pos.size() - 1;
		int ans = -1;
		while (l <= r) {
			int mid = l + (r - l) / 2;
			if (pos[mid] <= i) {
				ans = mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}
		return ans;
	};

	while (idx < pos.size()) {
		int crr = f(pos[idx] + k - 1);
		cnt++;
		idx = crr + 1;
	}
	cout << cnt << endl;
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
