#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<string> vec(n);
	for (auto &it : vec) cin >> it;
	reverse(all(vec));
	map<string, bool> mp;
	string ans = "";
	for (auto &it : vec) {
		if (!mp.count(it)) ans += it.substr(it.size() - 2, 2);
		mp[it] = 1;
	}
	cout << ans << endl;
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
