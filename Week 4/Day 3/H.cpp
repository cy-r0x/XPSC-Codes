#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int a, b;
	cin >> a >> b;
	vector<int> vec(a), val;
	for (auto &it : vec) {
		cin >> it;
		val.push_back(it + (&it - &vec[0]) + 1);
	}
	sort(val.begin(), val.end());
	int cnt = 0, i = 0;
	while (b >= val[i]) {
		if (i == val.size()) break;
		cnt++;
		b -= val[i];
		i++;
	}
	cout << cnt << endl;
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t = 1;
	cin >> t;
	// cout << stoi("10101") << endl;
	while (t--)
		solve();
	return 0;
}
