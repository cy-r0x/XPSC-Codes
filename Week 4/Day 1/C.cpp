#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	string ans = "";
	for (int i = 0; i < n; i++) {
		if (!i) ans.push_back(str[i]);
		if (str[i] != ans.back()) ans.push_back(str[i]);
	}
	// cout << ans << endl;
	int val = count(all(ans), '1');
	cout << min(val, (int)ans.size() - val) << endl;
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
