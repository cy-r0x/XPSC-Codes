#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;

class cmp {
public:
	bool operator()(pair<int, int> a, pair<int, int> b) {
		if (a.first != b.first) {
			return a.first < b.first;
		}
		return a.second > b.second;
	}
};

void solve() {
	int q;
	cin >> q;
	vector<bool> visited(q + 1, 0);

	int mn = 1;

	priority_queue < pair<int, int>, vector<pair<int, int>>, cmp> pr;
	priority_queue<int, vector<int>, greater<int>> pr_t;

	int cnt = 0;

	while (q--) {
		int x;
		cin >> x;
		if (x == 1) {
			int m;
			cin >> m;
			pr.push({m, cnt + 1});
			pr_t.push(cnt + 1);
			cnt++;
		}
		if (x == 2) {
			int tmp = pr_t.top();
			while (visited[tmp]) {
				pr_t.pop();
				tmp = pr_t.top();
			}
			visited[tmp] = 1;
			cout << tmp << " ";
			pr_t.pop();
		}
		if (x == 3) {
			int tmp = pr.top().second;
			while (visited[tmp]) {
				pr.pop();
				tmp = pr.top().second;
			}
			visited[tmp] = 1;
			cout << tmp << " ";
			pr.pop();
		}
	}
	cout << endl;
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
