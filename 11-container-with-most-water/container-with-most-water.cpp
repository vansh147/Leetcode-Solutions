class Solution {
public:
    int maxArea(vector<int>& height) {
        // int maxarea = INT_MIN;
        
        // for(int i=0;i<height.size();i++){
        //     int area = 0;
        //     for(int j=i+1;j<height.size();j++){
        //         if(height[i]>=height[j]){
        //             area = height[j]*(j-i);
        //         }
        //         else{
        //             area = height[i]*(j-i);
        //         }
        //         maxarea = max(area,maxarea);
        //     }
        // }
        // return maxarea;
         int left = 0;
        int right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int currentArea = min(height[left], height[right]) * (right - left);
            maxArea = max(maxArea, currentArea);

            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }

        return maxArea;
    }
};