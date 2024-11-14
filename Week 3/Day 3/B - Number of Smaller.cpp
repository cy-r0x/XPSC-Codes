#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, m;
	cin >> n >> m;
	vector<int> vec(n), vec_1(m);
	for (auto &it : vec) cin >> it;
	for (auto &it : vec_1) cin >> it;

	auto f = [&](int x) {
		int l = 0, r = n - 1;
		int ans = -1;
		while (l <= r) {
			int mid = (r + l) / 2;
			if (vec[mid] < x) {
				ans = mid;
				l = mid + 1;
			}
			else r = mid - 1;
		}
		return ans;
	};

	for (auto &it : vec_1) {
		cout << f(it) + 1 << " ";
	}
	cout << endl;

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
