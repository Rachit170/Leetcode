class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==1)
            return nums[0];
        else if(nums[n-1]!=nums[n-2]){
            return nums[n-1];
        }
        for(int i=0;i<n-1;i++){
            if(nums[i]!=nums[i+1])
                return nums[i];
            i++;
        }
        return -1;
    }
};
