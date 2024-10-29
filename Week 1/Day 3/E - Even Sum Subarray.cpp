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
	for (auto &it : vec) cin >> it;

	int mx = 0;

	for (int i = 0; i < n; i++) {
		int len = 0;
		for (int j = i; j < n; j++) {
			len++;

			int64_t sum = 0;

			for (int k = i; k <= j; k++) {
				sum += vec[k];
			}

			if (!(sum & 1)) {
				mx = max(mx, len);
			}
		}
	}

	cout << mx << endl;
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