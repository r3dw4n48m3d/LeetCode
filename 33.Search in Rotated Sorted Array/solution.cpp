class Solution {
public:
    int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size() - 1;

        while(start <= end){
            int mid = start + (end - start) / 2;

            if(nums[mid] == target){ // Result
                return mid;
            }

            if(nums[start] <= nums[mid]){ // If Left side is sorted
                if(nums[start] <= target && target <= nums[mid]){
                    end = mid - 1;
                }else{
                    start = mid + 1;
                }
            }else{ // If Right side is sorted
                if(nums[mid] <= target && target <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid - 1;
                }
            }
        }
        return -1;
    }
};
