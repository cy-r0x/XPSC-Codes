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
	for (auto &it : vec) cin >> it;
	if (is_sorted(all(vec))) {
		cout << -1 << endl;
		return;
	}
	int mn = 1, mx = n;
	int l = 0, r = n - 1;
	while (l < r) {
		if (vec[l] == mn) {
			l++;
			mn++;
		}
		else if (vec[l] == mx) {
			l++;
			mx--;
		}
		else if (vec[r] == mn) {
			mn++;
			r--;
		}
		else if (vec[r] == mx) {
			mx--;
			r--;
		}
		else break;
	}
	if (r - l >= 3) cout << l + 1 << " " << r + 1 << endl;
	else cout << -1 << endl;
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
