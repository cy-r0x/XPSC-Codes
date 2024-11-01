#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	map<int, int> mp;
	int mx = INT_MIN;
	while (n--) {
		int x;
		cin >> x;
		mp[x]++;
		mx = max(mp[x], mx);
	}
	cout << mx << endl;
}
int main()
{
	fast();
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}