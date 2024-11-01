#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	map<string, string> par, child;
	while (n--) {
		string p, ch;
		cin >> p >> ch;
		if (child.count(p)) {
			child[ch] = child[p];
			par[child[p]] = ch;
		}
		else {
			par[p] = ch;
			child[ch] = p;
		}
	}

	cout << par.size() << endl;
	for (auto &[x, y] : par) {
		cout << x << " " << y << endl;
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