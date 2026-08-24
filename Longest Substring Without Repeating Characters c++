class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // best and curr both at 0 for return and one for temp
        int best = 0;
        int right = 0;
        int left = 0;
        unordered_set<char> seen;
        // two pointers one on one starting at first char and on one the second
        for(int right = 0; right < s.size(); right++){
            while(seen.contains(s[right])){
                seen.erase(s[left]);
               left++;
            }

            seen.insert(s[right]);
            if(best < seen.size()){
                 best = seen.size();
            }
            
        }
        return best;
    }
      
};
