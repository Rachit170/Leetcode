/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize) {
    int* decompressed_list = NULL;
    int decompressed_size = 0;
    for (int i = 0; i < numsSize; i += 2) {
        int freq = nums[i];
        int val = nums[i + 1];
        decompressed_list = realloc(decompressed_list, sizeof(int) * (decompressed_size + freq));
        for (int j = 0; j < freq; j++) {
            decompressed_list[decompressed_size++] = val;
        }
    }
    *returnSize = decompressed_size;
    
    return decompressed_list;
}
