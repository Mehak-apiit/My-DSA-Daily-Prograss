class Solution {
public:
    int trap(vector<int>& height) {
        int st = 0;
        int end = height.size()-1;
        int left_max = height[0];
        int right_max = height[height.size()-1];
        int max_water = 0;
        while(st<end){
            right_max = max(right_max,height[end]);
            left_max = max(left_max,height[st]);
            if(left_max < right_max){
                max_water = max_water + (left_max-height[st]);
                st++;

            }
            else{
                max_water = max_water + (right_max-height[end]);
                end--;
            }

        }
        return max_water;

        
    }
};