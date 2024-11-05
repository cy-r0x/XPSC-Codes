#include <bits/stdc++.h>
using namespace std;
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) cout << "+" << endl;
	else cout << "-" << endl;
}

int main()
{
	fast();
	int t = 1;
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}