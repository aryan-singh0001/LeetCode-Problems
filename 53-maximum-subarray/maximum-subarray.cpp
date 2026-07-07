class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i = 0;
        int bestEnding = nums[0];
        int ans = nums[0];

        for(int i = 1; i<nums.size(); i++){
            bestEnding = max(nums[i], bestEnding + nums[i]);
            ans = max(ans, bestEnding);
        }
        return ans;
    }
};