#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n, q;
	cin >> n >> q;
	map<string, string> mp;
	while (n--) {
		string a, b;
		cin >> a >> b;
		mp[b] = a;
	}

	while (q--) {
		string a, b;
		cin >> a >> b;
		b.pop_back();
		cout << a << " " << b + ';' << " " << "#" + mp[b] << endl;
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