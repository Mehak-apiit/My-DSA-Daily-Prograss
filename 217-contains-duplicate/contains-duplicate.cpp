class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mymap;
        for(int i=0;i<n;i++){
            mymap[nums[i]]++;
        }
        for(auto it= mymap.begin();it!= mymap.end();it++){
            if(it->second > 1){
                return true;
            }
        }
        return false;
        
    }
};