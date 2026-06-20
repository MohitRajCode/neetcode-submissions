class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> groups;  // Declare ONCE
        
        for (string& s : strs) {
            string key = s;
            sort(key.begin(), key.end());
            
            // Group the string - fill this in:
            groups[key].push_back(s);
        }
        
        // Build result from map
        vector<vector<string>> result;
        for (auto& pair : groups) {
            result.push_back(pair.second);
        }
        
        return result;
    }
};