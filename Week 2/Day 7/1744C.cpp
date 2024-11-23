#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	char ch;
	cin >> n >> ch;
	string str;
	cin >> str;
	str += str;
	int last = -1;
	int ans = 0;
	for (int i = str.size() - 1; i >= 0; i--) {
		if (str[i] == 'g') last = i;
		if (str[i] == ch and last != -1) {
			ans = max(ans, last - i);
		}
	}
	cout << ans << endl;
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
