class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int remainder = 0; 
        int secondIndex = 0;
        for (int i = 0; i < nums.size(); i++) {
            remainder = target - nums[i];
            auto it = std::find(nums.begin() + i + 1, nums.end(), remainder);
            if (it != nums.end()) {
                secondIndex = std::distance(nums.begin(), it);
                return {i, secondIndex};
            }
        }
    }
};
