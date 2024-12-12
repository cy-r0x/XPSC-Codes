#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;

void solve() {
	int n, k;
	cin >> n >> k;
	vector<int> ans;
	for (int i = n - k; i >= 1; i--) {
		ans.push_back(i);
	}
	for (int i = n - k + 1; i <= n; i++) {
		ans.push_back(i);
	}

	for (auto &it : ans) {
		cout << it << " ";
	}
	cout << endl;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
		solve();
	return 0;
}
