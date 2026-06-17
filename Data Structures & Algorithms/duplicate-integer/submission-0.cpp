class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, int> keys;
        for(int x : nums){
            if(keys.find(x) == keys.end())
            {
                keys[x] = 1;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};