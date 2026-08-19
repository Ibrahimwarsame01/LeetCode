class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> output;
        priority_queue<pair<int,int>> maxHeap;
        std::sort(nums.begin(), nums.end()); // sort numbers so [1,2,2,3,3,3]
        unordered_map< int , int > hash;
        for (int i = 0; i < nums.size();i ++){
            hash[nums[i]]++;  // hash[1] = 1, hash[2] = [2,2]
        }
        for(auto& entry : hash){
            maxHeap.push({entry.second, entry.first});
        }
        for(int j = 0; j < k; j++){
            auto curr = maxHeap.top();
            output.push_back(curr.second);
            maxHeap.pop();
          }
          return output;
        }
    };
