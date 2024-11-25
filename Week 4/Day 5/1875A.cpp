#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int b, a, n;
	cin >> a >> b >> n;
	vector<int> vec(n);
	int64_t sum = b;
	for (auto &it : vec) {
		cin >> it;
		sum += min(it, a - 1);
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