int maxSubArray(int* nums, int numsSize) {
    int currentSum = *nums;
    int best = *nums;
    for(int i = 1; i < numsSize; i++){
        if( nums[i] < currentSum + nums[i] ){
           currentSum = currentSum + nums[i];
        } else{
            currentSum = nums[i];
        }
        if(best < currentSum){
            best = currentSum;
        }
    }
    return best;
}
