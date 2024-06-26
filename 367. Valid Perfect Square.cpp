class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 0, r = num;
        while(l <= r){
            long long mid = l + (r - l) / 2;
            if(mid * mid == num){
                return true;
            }
            else if(mid * mid > num){
                r = mid - 1;
            }       
            else l = mid + 1;
        } 
        return false;
    }
};

auto init = []()
{ 
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();
