#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n;
	cin >> n;
	deque<int> vec(n);
	for (auto &it : vec) {
		cin >> it;
	}
	int arr[2] = {0, 0};
	int i = 1;
	while (vec.size()) {
		if (vec[0] > vec.back()) {
			arr[i % 2] += vec[0];
			vec.pop_front();
		}
		else {
			arr[i % 2] += vec.back();
			vec.pop_back();
		}
		i++;
	}
	cout << arr[1] << " " << arr[0] << endl;
}
int main()
{
	fast();
	int t = 1;
	// cin >> t;
	while (t--)
		solve();
	return 0;
}