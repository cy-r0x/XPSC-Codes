#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < n; i++) {
        if (a[i] == 'G' || a[i] == 'B') a[i] = 'B';
        if (b[i] == 'G' || b[i] == 'B') b[i] = 'B';
    }
    if (equal(a.begin(), a.end(), b.begin())) cout << "Yes\n";
    else cout << "No\n";
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
    return 0;
}