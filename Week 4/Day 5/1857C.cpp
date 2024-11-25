#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec((n * (n - 1)) / 2);
	int mx = INT_MIN;

	for (auto &it : vec) {
		cin >> it;
		mx = max(mx, it);
	}

	sort(all(vec));
	int x = 0;
	for (int i = 0; i < (n * (n - 1)) / 2; i = (i + n - x)) {
		cout << vec[i] << " ";
		x++;
		if (!(x ^ n)) break;
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
