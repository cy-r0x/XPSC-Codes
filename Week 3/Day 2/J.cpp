#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;

int n, m;
vector<vector<int64_t>> mat;

int64_t f(int i, int j, int dx, int dy) {
	int64_t sum = 0;
	while (i >= 0 && i < n && j >= 0 && j < m) {
		sum += mat[i][j];
		i += dx;
		j += dy;
	}
	return sum;
}

void solve() {

	cin >> n >> m;
	mat.assign(n, vector<int64_t>(m));
	for (auto &it : mat) {
		for (auto &jt : it) cin >> jt;
	}

	int64_t mx = INT_MIN;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int64_t v = mat[i][j] + f(i - 1, j - 1, -1, -1) + f(i - 1, j + 1, -1, 1) + f(i + 1, j - 1, 1, -1) + f(i + 1, j + 1, 1, 1);
			mx = max(mx, v);
		}
	}

	cout << mx << endl;

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
