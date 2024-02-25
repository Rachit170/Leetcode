class Solution {
public:
    bool isPalindrome(int x) {
        long int rev=0;
        int org=x;
        if(org<0)
            return false;
        while(x!=0){
            rev= rev*10 + x%10;
            x/=10;
        }
        if(org==rev)
            return true;
        else
            return false;
    }
};
