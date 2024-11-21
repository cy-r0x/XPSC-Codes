#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	string a;
	cin >> a;
	vector<char> v;
	for (int i = a.size() - 1; i >= 0; i--) {
		stringstream ss;
		if (a[i] == '0') {
			ss << a[i - 1];
			int x;
			ss >> x;
			stringstream aa;
			aa << a[i - 2];
			int y;
			aa >> y;
			x += (y * 10);
			v.push_back((char)x + 96);
			i -= 2;
		}
		else {
			ss << a[i];
			int x;
			ss >> x;
			v.push_back((char)x + 96);
		}
	}
	reverse(v.begin(), v.end());
	for (auto &i : v)cout << i;
	cout << endl;
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
