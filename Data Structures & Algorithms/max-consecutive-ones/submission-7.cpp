class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int currentConsecutive = 0;
        for (int n : nums) {
            if (n == 1) {
                maxConsecutive = max(maxConsecutive, ++currentConsecutive);
            } else {
                currentConsecutive = 0;
            }
        }
        return maxConsecutive;
    }
};