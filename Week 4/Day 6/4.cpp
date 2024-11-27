#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int64_t n, s;
	cin >> n >> s;
	vector<int> vec(n);
	for (auto &it : vec) {
		cin >> it;
	}
	int l = 0, r = 0;
	int64_t ans = 0, sum = 0;
	while (r < n) {
		sum += vec[r];
		if (sum >= s) {
			while (l <= r and sum >= s) {
				ans += (n - r);
				sum -= vec[l];
				l++;
			}
		}
		r++;
	}
	cout << ans << endl;
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
