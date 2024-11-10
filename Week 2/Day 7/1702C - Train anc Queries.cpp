#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, q;
	cin >> n >> q;
	// vector<int> vec(n);
	map<int, vector<int>> mp;
	int x;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		mp[x].push_back(i);
	}

	while (q--) {
		int l, r;
		cin >> l >> r;
		bool flag = 0;
		for (int it : mp[l]) {
			auto jt = upper_bound(all(mp[r]), it);
			if (jt != mp[r].end()) {
				flag = 1;
				break;
			}
			else break;
		}
		if (flag) yes;
		else no;
	}
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
