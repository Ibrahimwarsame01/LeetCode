class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result; // created a array within array that we are going to return
        unordered_map<string, vector<string>> hash; // create hashmap of sorted string and strings that it can contain 
        vector<string> temp = strs; // create temp string to sort
        for(int i = 0; i < strs.size(); i++){
            std::sort(temp[i].begin() , temp[i].end());       //  1) we need to sort each str
            hash[temp[i]].push_back(strs[i]); // store in hash functoin since we sorted it creared a 2d array
        }
        for (auto& pair : hash) {
          result.push_back(pair.second); // store in result
        }
        return result;
    }
};
