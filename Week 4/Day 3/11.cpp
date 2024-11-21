class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        map<int64_t,int> mp;
        mp[0]=-1;
        
        int64_t sum=0;
        int n=arr.size();
        int ans=0;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(mp.count(sum-k)){
                ans=max(ans,i-mp[sum-k]);
            }
            if(!mp.count(sum)) mp[sum]=i;
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore(); // Ignore newline character after t

    while (t--) {
        vector<int> arr;
        int k;
        string inputLine;

        getline(cin, inputLine); // Read the array input as a line
        stringstream ss(inputLine);
        int value;
        while (ss >> value) {
            arr.push_back(value);
        }

        cin >> k;
        cin.ignore(); // Ignore newline character after k input

        Solution solution;
        cout << solution.lenOfLongestSubarr(arr, k) << "\n";
        cout << "~\n";
    }

    return 0;
}
