#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"RCB"<<endl
#define no cout<<"CSK"<<endl

using namespace std;


void solve() {
	int x, y;
	cin >> x >> y;
	if (x - 18 >= y) yes;
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
