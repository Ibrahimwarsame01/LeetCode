int missingNumber(int* nums, int numsSize) {
    int result = 0 ;
    for ( int i =0; i < numsSize ; i++){
        result = i ^ result ^ nums[i];
    }
        result = result ^ numsSize; 
    return result;
}
