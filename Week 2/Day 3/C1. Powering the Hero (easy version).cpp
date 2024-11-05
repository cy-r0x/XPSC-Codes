#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define endl "\n"
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	priority_queue<uint64_t> pq;
	uint64_t sum = 0;
	uint64_t x;
	while (n--) {
		cin >> x;
		if (x == 0 && !pq.empty()) {
			sum += pq.top();
			pq.pop();
			continue;
		}
		pq.push(x);
	}
	cout << sum << endl;
}
int main()
{
	fast();
	int t = 1;
	cin >> t;
	while (t--)
		solve();
	return 0;
}