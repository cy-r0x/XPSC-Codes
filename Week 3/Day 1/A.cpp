#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int x, y, z;
	cin >> x >> y >> z;

	double a = x + 0.5 * y + 4 - (x + y + z);
	double b = 0.5 * y + z;
	if (a > b) yes;
	else no;
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
