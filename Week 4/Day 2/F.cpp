#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int a, b, c;
	cin >> a >> b >> c;
	int val = abs(c - b);
	val += abs(c - 1);
	if (val < (a - 1)) cout << 2 << endl;
	else if (val == (a - 1)) cout << 3 << endl;
	else cout << 1 << endl;
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
