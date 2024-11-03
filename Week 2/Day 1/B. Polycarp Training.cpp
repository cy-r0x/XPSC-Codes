#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	for (auto &it : vec) {
		cin >> it;
	}
	sort(all(vec));

	int cnt = 1;
	for (auto &it : vec) {
		cnt += (it >= cnt);
	}

	cout << cnt - 1 << endl;
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