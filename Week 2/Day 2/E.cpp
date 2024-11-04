#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec) cin >> it;
    for (int i = 0; i < n; i++) {
        int x;
        string str;
        cin >> x >> str;
        for (char ch : str) {
            if (ch == 'D') vec[i]++;
            else vec[i]--;
            if (vec[i] >= 10) vec[i] = 0;
            else if (vec[i] < 0) vec[i] = 9;
        }
    }
    for (auto &it : vec) cout << it << " ";
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