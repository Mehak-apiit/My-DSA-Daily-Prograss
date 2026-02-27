class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,1);// array of size n and intialize with 1
        int prefix = 1;
        int sufix = 1;
        for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];

        }
        for(int i= n-2;i>=0;i--){
            sufix = sufix*nums[i+1];
            ans[i] = sufix * ans[i];
        }
        return ans;

        
    }
};