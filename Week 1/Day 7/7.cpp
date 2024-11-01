#include<bits/stdc++.h>
#define endl "\n"
#define all(x) x.begin(),x.end()
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define debug(args) cerr<<args<<" "
#define debug_n(args) cerr<<args<<endl
using namespace std;

void solve() {
    int n;
    cin >> n;
    string tmp = "";
    map<string, int> mp;
    while (n--) {
        cin >> tmp;
        if (mp[tmp]) cout << tmp << mp[tmp] << endl;
        else {
            cout << "OK" << endl;
        }
        mp[tmp]++;
    }
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