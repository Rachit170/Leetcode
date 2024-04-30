class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=1)
            return true;
        bool y=false,d=false;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1])
                y=true;
            else if(nums[i]>nums[i+1])
                d=true;
            if(y && d)
               return false;
        }
        return true;
    }
};
