#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	string str;
	cin >> str;
	int ans = n;
	int l = 0, r = n - 1;
	while (l < r) {
		if (str[l] == '1' and str[r] == '0') ans -= 2;
		else if (str[l] == '0' and str[r] == '1') ans -= 2;
		else break;
		l++;
		r--;
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
