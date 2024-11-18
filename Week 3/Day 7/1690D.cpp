#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;
	string str;
	cin >> str;
	vector<int> pre = {0};
	for (int i = 0; i < n; i++) {
		pre.push_back(pre.back() + (str[i] == 'B'));
	}
	int mn = INT_MAX;
	for (int i = 1; i <= pre.size() - k; i++) {
		// cout << pre[i + k - 1] - pre[i - 1] << " ";
		mn = min(mn, k - (pre[i + k - 1] - pre[i - 1]));
	}
	// cout << endl;
	cout << mn << endl;
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
