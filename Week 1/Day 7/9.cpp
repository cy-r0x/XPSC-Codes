#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	unordered_map<string, int> mp;
	vector<string> vec(n);

	for (int i = 0; i < n; ++i) {
		cin >> vec[i];
		mp[vec[i]] = i;
	}

	vector<pair<int, string>> vec1;
	for (auto &it : mp) {
		vec1.push_back({it.second, it.first});
	}

	sort(vec1.rbegin(), vec1.rend());

	for (auto &it : vec1) {
		cout << it.second << '\n';
	}

}
int main()
{
	fast();
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}