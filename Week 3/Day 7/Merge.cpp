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
	vector<int> ans;
	int l1 = 0, l2 = 0;
	while (l1 < n and l2 < m) {
		while (vec[l1] <= vec_1[l2]) {
			ans.push_back(vec[l1]);
			l1++;
			if (l1 >= n) break;
		}
		while (vec_1[l2] <= vec[l1]) {
			ans.push_back(vec_1[l2]);
			l2++;
			if (l2 >= m) break;
		}
	}
	if (l1 < n) {
		while (l1 < n) {
			ans.push_back(vec[l1]);
			l1++;
		}
	}
	if (l2 < m) {
		while (l2 < m) {
			ans.push_back(vec_1[l2]);
			l2++;
		}
	}
	
	for (auto &it : ans) cout << it << " ";
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
