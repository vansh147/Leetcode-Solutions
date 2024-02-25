class Solution {
public:
    long long largestSquareArea(vector<vector<int>>& bottomLeft, vector<vector<int>>& topRight) {
   long long int maxArea = 0;
    for (int i=0;i<bottomLeft.size();++i) {
        for (int j=i+1;j<bottomLeft.size();++j) {
            int x1 = max(bottomLeft[i][0],bottomLeft[j][0]);
            int y1 = max(bottomLeft[i][1],bottomLeft[j][1]);
            int x2 = min(topRight[i][0],topRight[j][0]);
            int y2 = min(topRight[i][1],topRight[j][1]);
            if (x2>x1&&y2>y1) {
               long long  int side = min(x2-x1,y2-y1);
                maxArea = max(maxArea, side * side);
            }
        }
    }
    return maxArea;
    }
};