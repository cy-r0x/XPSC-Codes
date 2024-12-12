#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<Yes<<endl
#define no cout<<No<<endl

using namespace std;

void solve() {
	int n;
	cin >> n;
	vector<int> vec;

	for (int i = 3; i <= n; i += 3) {
		vec.push_back(i);
	}

	for (int i = 1; i <= n; i++) {
		if (i % 3) {
			vec.push_back(i);
		}
	}
	for (auto &it : vec) {
		cout << it <<  ;
	}
	cout << endl;

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
