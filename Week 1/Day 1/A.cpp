#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int a, b;
	cin >> a >> b;
	int ans = (b - a + 1);
	cout << (ans > 0 ? ans : 0) << endl;
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