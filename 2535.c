//OPTIMAL SOLUTION
int differenceOfSum(int* nums, int numsSize) {
    int ArraySum=0,DigitsSum=0;
    for(int i=0;i<numsSize;i++){
        ArraySum+=nums[i];
        while(nums[i]!=0){
            DigitsSum+=(nums[i]%10);
            nums[i]/=10;
        }
    }
    return abs(DigitsSum-ArraySum);
}
//------------------------------------------------
/* BRUTE FORCE

int differenceOfSum(int* nums, int numsSize) {
    int ArraySum=0;
    for(int i=0;i<numsSize;i++){
        ArraySum+=nums[i];
    }
    int DigitsSum=0;
    for(int i=0;i<numsSize;i++){
        while(nums[i]!=0){
            DigitsSum+=(nums[i]%10);
            nums[i]/=10;
        }
    }
    return abs(DigitsSum-ArraySum);
}
*/
