/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    int count,i=0,j;
    int *arr=(int * )malloc(sizeof(int)*numsSize);
    while(i<numsSize){
        count =0 ;
        j=0;
        while(j<numsSize){
            if(nums[i]>nums[j]){
                count++;
            }
            j++;
        }
        arr[i]=count;
        i++;
    }
    *returnSize=numsSize;
    return arr;
}
