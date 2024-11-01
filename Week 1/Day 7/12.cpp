#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	string str, ans = "";
	int n;
	cin >> n >> str;
	bool arr[256] = {0};
	for (auto &it : str) {
		if (!arr[it]) {
			ans += it;
		}
		arr[it] = 1;
	}
	sort(all(ans));
	map<char, char> mp;
	for (int i = 0; i <= ans.size() / 2; i++) {
		mp[ans[i]] = ans[ans.size() - 1 - i];
		mp[ans[ans.size() - 1 - i]] = ans[i];
	}
	for (char &ch : str) {
		cout << mp[ch];
	}
	cout << endl;
}
int main()
{
	fast();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}