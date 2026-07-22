int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int *output = malloc(2 * sizeof(int));
    *returnSize = 2;
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++)
            if (target == nums[i] + nums[j]) {
                output[0] = i;
                output[1] = j;
                return output;
            }
    }
    
    free(output);
    *returnSize = 0;
    return NULL;
}
