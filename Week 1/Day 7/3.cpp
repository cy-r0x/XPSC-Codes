#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	map<pair<string, string>, bool> mp;
	int cnt = 0;
	while (n--) {
		string a, b;
		cin >> a >> b;
		if (!mp.count({a, b})) {
			cnt++;
			mp[ {a, b}] = 1;
		}
	}
	cout << cnt << endl;
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