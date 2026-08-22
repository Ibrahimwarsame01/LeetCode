class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> output(2);
        int left = 0;
        int right = numbers.size() - 1;
        while (left < right){
            int sum = numbers[left] + numbers[right];
            if ( sum == target ){
                output[0] = left + 1;
                output[1] = right + 1;
                break;
            }else if (sum < target){
                left++;
            }else {
                right--;
            } 
            }
            return output;
            }
        };
