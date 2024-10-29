#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int n;
	cin >> n;
	vector<int> vec(n);
	vector<int> odd, even;
	for (auto &it : vec) {
		cin >> it;
		if (it & 1) odd.push_back(it);
		else even.push_back(it);
	}

	sort(all(odd), greater<>());

	int64_t sum = 0;

	for (int i = 0; i < odd.size() - (odd.size() & 1); i++) {
		sum += odd[i];
	}

	for (auto &it : even) sum += it;
	cout << sum << endl;

}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}