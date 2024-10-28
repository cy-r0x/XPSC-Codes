#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	string str;
	cin >> str;
	map<char, bool> mp;
	for (char ch : str) {
		mp[ch] = 1;
	}
	for (char ch = 'a'; ch <= 'z'; ch++) {
		if (!mp[ch]) {
			cout << ch << endl;
			return;
		}
	}
	cout << "None" << endl;
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