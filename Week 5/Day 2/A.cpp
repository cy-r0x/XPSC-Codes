#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<Yes<<endl
#define no cout<<No<<endl

using namespace std;

void solve() {
	int n;
	cin >> n;
	if (n & 1) {
		// cout << -1 << endl;
		no;
		return;
	}


	string ans;
	yes;
	for (int i = 1; i <= n / 2; i++) {
		ans += ('A' + i - 1);
		ans += ('A' + i - 1);
	}
	cout << ans << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
