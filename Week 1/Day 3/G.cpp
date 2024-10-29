#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int s, t;
	int cnt = 0;
	cin >> s >> t;
	for (int a = 0; a <= 107; a++) {
		for (int b = 0; b <= 107; b++) {
			for (int c = 0; c <= 107; c++) {
				if (a + b + c <= s and a * b * c <= t) cnt++;
			}
		}
	}
	cout << cnt << endl;
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