//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    int l = 0, r = 0;
	vector<int> cnt(26, 0);
	int ans = -1;
	while (r < s.size()) {
		cnt[s[r] - 'a']++;
		int crr = count_if(cnt.begin(),cnt.end(), [](int x) {return bool(x);});
		if (crr == k) {
			ans = max(ans, (r - l) + 1);
		}
		if (crr > k) {
			cnt[s[l] - 'a']--;
			l++;
		}
		r++;
	}
	return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    
cout << "~" << "\n";
}
}

// } Driver Code Ends
