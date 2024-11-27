#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	
	int64_t n, k;
	cin >> n >> k;
	vector<int64_t>a(n + 1), h(n + 1);
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		a[i] += a[i - 1];
	}

	for (int i = 1; i <= n; ++i)
	{
		cin >> h[i];
	}

	int ans = 0;
	for (int l = 1, r = 1; l <= n; l = r + 1)
	{
		r = l;
		while (r < n && h[r] % h[r + 1] == 0)
		{
			r++;
		}
		for (int i = l; i <= r; ++i)
		{
			int p = upper_bound(a.begin() + i, a.begin() + r + 1, k + a[i - 1]) - a.begin();
			ans = max(ans, p - i);
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
