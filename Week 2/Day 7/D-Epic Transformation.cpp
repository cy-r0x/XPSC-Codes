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

	int mx = INT_MIN;

	for (auto &it : vec) {
		cin >> it;
		mp[it]++;
		mx = max(mx, mp[it]);
	}

	cout << max(n % 2, 2 * mx - n) << endl;

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
