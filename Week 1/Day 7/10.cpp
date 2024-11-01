#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	map<string, bool> mp;
	while (n--) {
		string str;
		cin >> str;
		if (mp.count(str)) {
			yes;
		}
		else {
			mp[str] = 1;
			no;
		}
	}
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