/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        sort(a.begin(), a.end());
        
        int n = a.size();
        vector<vector<int> > ans;       
        set<vector<int>>s;             
        
        for(int i = 0; i<n;i++){
            for(int j = i+1; j<n;j++){
                int l = j+1, m = n-1;
                while(l<m){
                    int sum = a[i] + a[j] + a[l] + a[m];
                    if(sum==k){
                        vector<int>temp;
                        temp.push_back(a[i]);
                        temp.push_back(a[j]);
                        temp.push_back(a[l]);
                        temp.push_back(a[m]);
                        s.insert(temp);
                        l++;
                        m--;
                    }else if(sum<k){
                        l++;
                    }else if(sum>k){
                        m--;
                    }
                    
                }
            }
        }
        
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

*/
/*
//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &a, int k) {
        sort(a.begin(), a.end());
        
        int n = a.size();
        vector<vector<int> > ans;       
        set<vector<int>>s;             
        
        for(int i = 0; i<n;i++){
            for(int j = i+1; j<n;j++){
                int l = j+1, m = n-1;
                while(l<m){
                    int sum = a[i] + a[j] + a[l] + a[m];
                    if(sum==k){
                        vector<int>temp;
                        temp.push_back(a[i]);
                        temp.push_back(a[j]);
                        temp.push_back(a[l]);
                        temp.push_back(a[m]);
                        s.insert(temp);
                        l++;
                        m--;
                    }else if(sum<k){
                        l++;
                    }else if(sum>k){
                        m--;
                    }
                    
                }
            }
        }
        
        for(auto i: s){
            ans.push_back(i);
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        vector<int> a(n);
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        vector<vector<int> > ans = ob.fourSum(a, k);
        for (auto &v : ans) {
            for (int &u : v) {
                cout << u << " ";
            }
            cout << "$";
        }
        if (ans.empty()) {
            cout << -1;
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends

*/