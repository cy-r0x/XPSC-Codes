#include <bits/stdc++.h>
using namespace std;
void solve()
{
	int n;
	cin >> n;
	string arr[3][n];
	unordered_map<string, int> a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
			a[arr[i][j]]++;
		}
	}
	int cnt[3];
	memset(cnt, 0, sizeof(cnt));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (a[arr[i][j]] == 1) cnt[i] += 3;
			if (a[arr[i][j]] == 2) cnt[i]++;
		}
	}
	cout << cnt[0] << " " << cnt[1] << " " << cnt[2] << endl;
}
int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}