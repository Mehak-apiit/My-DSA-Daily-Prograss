class Solution {
public:
    int maxArea(vector<int>& height) {
        int area = 0;
        int st = 0;
        int end = height.size()-1;
        while(st<end){
            int b = end-st;
            int l = min(height[st],height[end]);
            area = max(area,l*b);
            if(height[st]<height[end]){
                st++;
            }
            else{
                end--;
            }
        }
        return area;
        
    }
};