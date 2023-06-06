#include<bits/stdc++.h>
using namespace std;

int evenlyDivides(int n){
        //code here
        int temp = n, cnt = 0;
        
        while(temp){
            if(temp%10 !=0 && n%(temp%10) == 0)
                cnt++;
            temp/=10;
        }
        return cnt;
}

int main(){
  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    cout << evenlyDivides(n) << endl;
  }
  return 0;
}
