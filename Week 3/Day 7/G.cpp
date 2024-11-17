#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
	string s, t;
	cin >> s >> t;
	if (s.back() != t.back())
	{	if (s.back() == 'S')
			cout << "<";
		else if (t.back() == 'S')
			cout << ">";
		else if (s.back() == 'M')
			cout << "<";
		else cout << ">";
	}
	else
	{
		if (s.back() == 'L')
			swap(s, t);
		if (s.size() == t.size())
			cout << "=";
		else if (s.size() < t.size())
			cout << ">";
		else cout << "<";
	}
	cout << endl;
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
