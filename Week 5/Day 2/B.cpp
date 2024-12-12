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
	map<int, deque<int>> mp;
	char ch = 'a';
	string ans(n, '.');

	for (int i = 0; i < n; i++) {
		cin >> vec[i];
		if (!vec[i]) {
			ans[i] = ch;
			ch++;
		}
		else mp[vec[i]].push_back(i);
	}

	// cout << ans << endl;

	for (char ch = 'a'; ch <= 'z'; ch++) {
		for (auto &[x, y] : mp) {
			if (y.size()) {
				ans[y.front()] = ch;
				y.pop_front();
			}
		}
	}
	cout << ans << endl;

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
