#include <bits/stdc++.h> 
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    //  Write your code here.
    int idx = -1;
    n = n-1;
    for(int i=n-1; i>=0; i--){
        if(permutation[i] < permutation[i+1]){
            idx = i;
            break;
        }
    }

    if(idx == -1){
        reverse(permutation.begin(), permutation.end());
        return permutation;
    }

    for(int i=n; i>idx; i--){
        if(permutation[i] > permutation[idx]){
            swap(permutation[i], permutation[idx]);
            break;
        }
    }
    reverse(permutation.begin()+idx+1, permutation.end());
    return permutation;
}
