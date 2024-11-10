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
	map<int, int> mp;
	for (auto &it : vec) {
		cin >> it;
		mp[it]++;
	}

	int last = -1;
	int cnt = 0;

	for (auto &[x, y] : mp) {
		if (x == last + 1) {
			n -= min(y, cnt);
		}
		last = x;
		cnt = y;
	}
	cout << n << endl;

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
