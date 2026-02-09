class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<vector<int>> bucket(nums.size()+1);
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        for(auto it:mp)
        {
            int num = it.first;
            int freq = it.second;
            bucket[freq].push_back(num);
        }
        for(int i=bucket.size()-1;i>=0;i--){
            for(auto num:bucket[i]){
                ans.push_back(num);
                if(ans.size()==k){
                    return ans;
                }
            }
        }
        return ans;
        
    }
};