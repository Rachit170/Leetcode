class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0;
        int sumLeft=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            sum-=nums[i];
            if(sumLeft==sum)
                return i;
            sumLeft+=nums[i];
        }
        return -1;
    }
};
/*
My original brute force 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        if(nums.size()==0) return -1;
        int sumLeft=0;
        for(int i=0;i<nums.size();i++){
            int sumRight =0;
            for(int j=i+1;j<nums.size();j++){
                sumRight+=nums[j];
            }
            if(sumLeft==sumRight)
                return i;
            sumLeft+=nums[i];
        }
        return -1;
    }
};
*/
