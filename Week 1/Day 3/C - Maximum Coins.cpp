#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl;
#define no cout<<"No"<<endl;

using namespace std;


void solve() {
	int n, k;
	cin >> n >> k;
	int64_t sum = 0, sum1 = 0;


	while (k--) {
		sum += (1LL << n);
		n--;
	}

	for (int i = 1; i <= n; i++) {
		sum -= (1LL << i);
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