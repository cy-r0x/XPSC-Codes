#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n, m, h;
	cin >> n >> m >> h;
	vector<int> vec(n), vec_1(m);
	for (auto &it : vec) cin >> it;
	for (auto &it : vec_1) cin >> it;
	sort(all(vec), greater<>());
	sort(all(vec_1), greater<>());
	int64_t sum = 0;

	for (int i = 0; i < min(n, m); i++) {
		sum += min(1LL * vec[i], 1LL * vec_1[i] * h);
	}
	cout << sum << endl;

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
