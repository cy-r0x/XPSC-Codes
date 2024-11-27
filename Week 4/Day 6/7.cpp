#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, s;
	cin >> n >> s;
	vector<int> vec(n);
	for (auto &it : vec) {
		cin >> it;
	}

	int l = 0, r = 0;

	int sum = 0;

	int ans = INT_MAX;

	while (r < n) {
		sum += vec[r];
		if (sum > s) {
			sum -= vec[l];
			l++;
		}
		if (sum == s) {
			ans = min(ans, l + (n - r));
		}
		r++;
	}
	cout << (ans == INT_MAX ? -1 : ans - 1) << endl;
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
