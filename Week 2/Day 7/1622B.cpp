#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &it : vec) cin >> it;
	string str;
	cin >> str;

	vector<pair<int, int>> crr;
	vector<int> ans(n, -1);

	for (int i = 0; i < n; i++) {
		if (str[i] == '0') {
			crr.push_back(make_pair(vec[i], i));
		}
	}

	sort(all(crr));

	int cnt = 1;
	for (auto &[x, y] : crr) {
		ans[y] = cnt;
		cnt++;
	}

	crr.clear();

	for (int i = 0; i < n; i++) {
		if (str[i] == '1') {
			crr.push_back(make_pair(vec[i], i));
		}
	}

	sort(all(crr));

	for (auto &[x, y] : crr) {
		ans[y] = cnt;
		cnt++;
	}

	for (auto &it : ans) {
		cout << it << " ";
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
