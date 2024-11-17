#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec;
	int64_t sum = 0;

	int x;

	for (int i = 0; i < n; i++) {
		cin >> x;
		if (!x) continue;
		vec.push_back(x);
		sum += abs(x);
	}

	int cnt = 0;

	for (int i = 0; i < vec.size(); i++) {
		int tmp = 0;
		while (i < vec.size() and vec[i] < 0) {
			tmp++;
			i++;
		}
		cnt += bool(tmp);
	}
	cout << sum << " " << cnt << endl;
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
