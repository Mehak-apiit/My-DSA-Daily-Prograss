class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<string,vector<string>> mp;
        int n = strs.size();
        string temp;
        for(int i =0;i<n;i++){
            temp = strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(temp);

        }
        for(auto it: mp){
            res.push_back(it.second);
        }
        return res;

        
    }
};