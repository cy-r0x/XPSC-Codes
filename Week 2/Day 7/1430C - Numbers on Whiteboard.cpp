#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n ;
	cin >> n;
	cout << 2 << endl;
	cout << n - 1 << " " << n << endl;
	for (int i = n - 2; i >= 1; i--) {
		cout << i << " " << i + 2 << endl;
	}
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
