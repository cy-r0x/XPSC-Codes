#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	vector<int64_t>vec(n);
	int64_t sum = 0;
	for (int i = 0 ; i < n; i ++) {
		if (s[i] == 'L') {
			sum += i;
			vec[i] = n  - 1 - 2 * i;
		}
		else {
			sum += n - i - 1;
			vec[i] = i - (n - i - 1);
		}
	}
	sort(all(vec), greater<>());
	for (int i = 0 ; i < n; i ++) {
		sum += vec[i] < 0 ? 0 : vec[i];
		cout << sum << " ";
	}
	cout << endl;
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
