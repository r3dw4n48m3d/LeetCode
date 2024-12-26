class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1, maxWater = 0, currentWater = 0;
        while (left < right) {
            int width = right - left;
            int high = min(height[left], height[right]);
            currentWater = width * high;
            maxWater = max(maxWater, currentWater);
            height[left] < height[right] ? left++ : right--;
        }
        return maxWater;
    }
};
