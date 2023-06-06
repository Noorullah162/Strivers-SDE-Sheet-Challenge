class Solution {
public:
    int reverse(int x) {
        // int temp = abs(x);
        long long int res = 0;
        while(x){
            
            res = (res * 10) + (x%10);
            x /= 10;
        }
        if(res < INT_MIN || res > INT_MAX) return 0;
        return res;
}
