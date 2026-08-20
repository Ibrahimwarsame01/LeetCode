class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string;
        for(int i = 0; i < strs.size();i++){
            string length = std::to_string(strs[i].length());
            encoded_string += length + '*' + strs[i];
        }
        return encoded_string;
    }

    vector<string> decode(string s) { 
        vector<string> output;
        int pos = 0;
        while( pos < s.size()){ //12*hello_world1*h
            int delimIndex = s.find('*' , pos);
           string strlen =  s.substr(pos,(delimIndex - pos));
           int length = std::stoi(strlen);
           string word = s.substr(delimIndex + 1,length);
           output.push_back(word);
           pos = length + delimIndex + 1;
        }
        return output;
    }
};
