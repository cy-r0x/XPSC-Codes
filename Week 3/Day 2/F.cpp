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
	for (auto &it : vec) {
		cin >> it;
	}
	map<int, bool> mp;
	for (int i = n - 1; i >= 0; i--) {
		if (mp[vec[i]]) {
			cout << n - (n - i) + 1 << endl;
			return;
		}
		mp[vec[i]] = 1;
	}
	cout << 0 << endl;
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
