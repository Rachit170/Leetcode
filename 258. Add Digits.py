class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if(num==0):
            return 0
        return 1+((num-1)%9)
'''
For soltion in c++ (Brute force)
class Solution {
public:
    int addDigits(int n) {
        if(n==0) return 0;
        int sum=0;
        while(n!=0){
            sum+=n%10;
            n/=10;
            if(n==0 && sum>=10){
                n=sum;
                sum=0;
            }
        }
        return sum;
    }
};
'''
