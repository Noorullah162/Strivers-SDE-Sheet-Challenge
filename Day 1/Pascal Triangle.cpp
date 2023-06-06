// strivers-SDE-Sheet-challenge question

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
  vector<vector<long long int>> v1;
  v1.push_back({1});
  if(n==1) return v1;
  v1.push_back({1,1});
  if(n==2) return v1;
  for(int i=2; i<n; i++){
    int n2 = v1[i-1].size();
    vector<long long int> v2(n2+1, 1);
    for(int j=1; j<n2; j++){
      v2[j] = v1[i-1][j] + v1[i-1][j-1];
    }
    v1.push_back(v2);
  }
  return v1;
  
}
