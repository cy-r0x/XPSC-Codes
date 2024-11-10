#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    int64_t n, m, q;
    cin >> n >> m >> q;
    vector<int64_t> vec(m);
    for (auto &it : vec)
    {
        cin >> it;
    }

    sort(all(vec));

    while (q--) {
        int64_t d;
        cin >> d;
        if (d < vec[0]) {
            cout << vec[0] - 1 << endl;
        }
        else if (d > vec.back()) {
            cout << n - vec.back() << endl;
        }
        else {
            auto it = upper_bound(all(vec), d);
            cout << (*it - * (it - 1)) / 2 << endl;
        }
    }
}

int main()
{
    fast();
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
