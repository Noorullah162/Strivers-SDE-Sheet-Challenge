// fibnacci series in gfg

//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    
    vector<long long> factorialNumbers(long long n)
    {
        // Write Your Code here
        vector<long long int> v;
        v.push_back(1);
        if(n==1) return v;
        for(int i=2; i<=n; i++){
            if(i*v[i-2]>n)
                break;
            v.push_back(i*v[i-2]);
            // cout << v[i] << " ";
        }
        return v;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long N;
        cin>>N;
        Solution ob;
        vector<long long> ans = ob.factorialNumbers(N);
        for(auto num : ans){
            cout<<num<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
// } Driver Code Ends
