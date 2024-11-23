#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<vector<int>> vec(n, vector<int>(n - 1));
	for (auto &it : vec) {
		for (auto &jt : it) {
			cin >> jt;
		}
	}

	vector<int> ans;
	vector<bool> nisi(n + 1, 0);
	for (int j = 0; j < n - 1; j++) {
		int freq[n + 1] = {0};
		int mx = INT_MIN;
		int idx = -1;
		for (int i = 0; i < n; i++) {
			freq[vec[i][j]]++;
			if (freq[vec[i][j]] > mx) {
				mx = freq[vec[i][j]];
				idx = vec[i][j];
			}
		}
		nisi[idx] = 1;
		ans.push_back(idx);
	}

	int miss = -1;

	for (int i = 1; i <= n; i++) {
		if (!nisi[i]) {
			miss = i;
			break;
		}
	}

	map<int, int> mp;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (vec[i][j] == miss and j != n - 2) {
				mp[vec[i][j + 1]]++;
			}
		}
	}

	int pos = -1;

	int mx = INT_MIN;

	for (auto &[x, y] : mp) {
		if (y > mx) {
			pos = x;
			mx = y;
		}
	}

	for (int i = 0; i < ans.size(); i++) {
		if (ans[i] == pos) {
			cout << miss << " ";
		}
		cout << ans[i] << ' ';
	}
	cout << endl;
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
