#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	for (a; a <= b; a++) {
		if (a % c == 0) {
			cout << a << endl;
			return;
		}
	}
	cout << -1 << endl;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}