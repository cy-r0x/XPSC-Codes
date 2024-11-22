#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int64_t> pre = {0};
	for (auto &it : vec) {
		cin >> it;
		pre.push_back(it + pre.back());
	}
	string str;
	cin >> str;
	vector<int> l, r;
	for (int i = 0; i < n; i++) {
		if (str[i] == 'L') {
			l.push_back(i + 1);
		}
		else r.push_back(i + 1);
	}
	int64_t ans = 0;
	int i = 0;
	while (i < l.size() and r.size()) {
		if (l[i] < r.back()) ans += pre[r.back()] - pre[l[i] - 1];
		i++;
		r.pop_back();
	}
	cout << ans << endl;
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
