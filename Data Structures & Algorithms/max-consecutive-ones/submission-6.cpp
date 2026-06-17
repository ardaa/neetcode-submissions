class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxConsecutive = 0;
        int currentConsecutive = 0;
        for(int i : nums){
            if(i == 0){
                if(currentConsecutive > maxConsecutive){                    
                    maxConsecutive = currentConsecutive;
                }
                    currentConsecutive = 0;
            }
            else{
                currentConsecutive++;
            }
            
        }
        if(currentConsecutive > maxConsecutive){
                    maxConsecutive = currentConsecutive;
                    currentConsecutive = 0;
                }
        return maxConsecutive;
    }
};