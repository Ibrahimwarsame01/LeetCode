int singleNumber(int* nums, int numsSize) {
    int holder = 0;
    for (int i = 0; i < numsSize; i++){
       holder = holder ^ nums[i];
    }
    return holder;
}
