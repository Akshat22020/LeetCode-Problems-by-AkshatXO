class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int maxwater = 0;
        while (lp < rp) {
            int width = rp - lp;
            int currHeight = min(height[lp], height[rp]);
            int area = width * currHeight;

            maxwater = max(maxwater, area);
            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return maxwater;
    }
};
