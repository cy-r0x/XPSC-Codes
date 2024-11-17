#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	int n;
	cin >> n;
	set<int>st;
	int x;
	for (int i = 0; i < n; i++) {
		cin >> x;
		st.insert(x);
	}
	if (st.size() == 1 or st.size() == 2 and * (st.begin()) == 0) yes;
	else no;
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
