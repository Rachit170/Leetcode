class Solution {
    public int[] sortArrayByParity(int[] nums) {
        int i=0,j=nums.length-1,t;
        while(i<j){
            while(i<j && nums[i]%2==0)
                i++;
            while(i<j && nums[j]%2!=0)
                j--;
            if(i<j){
                t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
            else
                return nums;
        }
        return nums;
    }
}
