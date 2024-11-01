#include<bits/stdc++.h>
#define ll long long
#define B begin()
#define E end()
#define all(x) x.B,x.E
#define fast() ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
using namespace std;

void solve() {
    string str;
    cin >> str;
    int chk_low = 0, chk_up = 0;
    deque<char> dq;
    for (int i = str.size() - 1; i >= 0; i--) {
        if (str[i] == 'B') {
            chk_up++;
            continue;
        }
        if (str[i] == 'b') {
            chk_low++;
            continue;
        }
        if (chk_low and islower(str[i])) {
            chk_low--;
            continue;
        }
        if (chk_up and isupper(str[i])) {
            chk_up--;
            continue;
        }
        dq.push_front(str[i]);
    }
    for (auto &it : dq) cout << it;
    cout << endl;
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