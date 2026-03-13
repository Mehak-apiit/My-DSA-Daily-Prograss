class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int st = 0;
        int end = numbers.size()-1;
        while(st<end){
            int req = target-numbers[st];
            if(req == numbers[end]){
                return {st+1,end+1};
            }
            if(req > numbers[end]){
                st++;
                continue;
            }
             if(req < numbers[end]){
                end--;
                continue;
            }
        }
        return {};
        
    }
    
};