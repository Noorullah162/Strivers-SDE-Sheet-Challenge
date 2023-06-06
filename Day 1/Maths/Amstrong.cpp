// Amstrong number in gfg

//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n){
        // code here
        int temp = n, cnt = 0;
        while(temp){
            temp/=10;
            cnt++;
        }
        int res = 0;
        temp = n;
        while(temp){
            res = res + pow(temp%10, cnt);
            temp /= 10;
        }
        return n == res ? "Yes" : "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends
