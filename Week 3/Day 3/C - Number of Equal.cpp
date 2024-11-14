#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> vec(n), vec_1(m);
	map<int, pair<int, int>> mp;
	for (int i = 0; i < n; i++) {
		cin >> vec[i];
	}

	for (int i = 0; i < n;) {
		int crr = vec[i];
		int idx = i;
		while (i < n and vec[i] == crr) {
			i++;
		}
		mp[crr] = {idx, i};
	}

	int64_t sum = 0;
	for (auto &it : vec_1) {
		cin >> it;
		sum += (mp[it].second - mp[it].first);
	}
	cout << sum << endl;


}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}
