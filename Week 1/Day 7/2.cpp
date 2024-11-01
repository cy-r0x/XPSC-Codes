#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;
void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = 0;
    for (char ch : str) {
        if (ch == 'B') break;
        cnt++;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == 'B') break;
        cnt++;
    }
    cout << n - cnt << endl;
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