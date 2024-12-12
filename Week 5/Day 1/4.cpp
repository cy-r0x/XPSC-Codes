#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<Yes<<endl
#define no cout<<No<<endl

using namespace std;

void solve() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		swap(a, b);
	}

	cout << (a ^ b) << endl;
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
