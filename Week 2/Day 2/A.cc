#include<bits/stdc++.h>
#define all(x) x.begin(),x.end()
#define endl '\n'
#define yes cout<<"Yes"<<endl
#define no cout<<"No"<<endl

using namespace std;


void solve() {
    int n, x;
    cin >> n >> x;
    int f;
    for (int i = 0; i < n; i++) {
        cin >> f;
        if (f == x) continue;
        cout << f << " ";
    }
    cout << endl;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
    return 0;
}