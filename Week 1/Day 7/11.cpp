#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

char ans(char ch) {
	return (ch == 'z') ? 'a' : ch + 1;
}

void solve() {
	string str;
	cin >> str;
	// cout << str << endl;
	int n = str.size();
	if (n == 1) {
		cout << str + ans(str[0]) << endl;
		return;
	}
	for (int i = 0; i < n - 1; i++) {
		cout << str[i];
		if (str[i] == str[i + 1]) {
			cout << ans(str[i]);
			for (int j = i + 1; j < n; j++) {
				cout << str[j];
			}
			cout << endl;
			return;
		}
	}
	cout << str.back() << ans(str.back()) << endl;
}
int main()
{
	fast();
	int t = 1;
	cin >> t;
	while (t--)
	{
		solve();
	}
	return 0;
}