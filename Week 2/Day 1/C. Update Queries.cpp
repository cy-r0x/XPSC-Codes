#include<bits/stdc++.h>
#define no cout<<"NO"<<'\n'
#define yes cout<<"YES"<<'\n'
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
	int n, m;
	cin >> n >> m;
	string str;
	cin >> str;
	vector<int> hash(26, 0);
	int tmp;
	for (int i = 0; i < m; i++) {
		cin >> tmp;
		str[tmp - 1] = '.';
	}
	string str1;
	cin >> str1;
	for (auto &it : str1) {
		hash[it - 'a']++;
	}
	str1 = "";
	for (int i = 0; i < 26; i++) {
		str1 += string(hash[i], i + 'a');
	}
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (str[i] == '.') {
			str[i] = str1[cnt];
			cnt++;
		}
	}
	cout << str << endl;
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