class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> letters;
        if(s.length() != t.length()){
            return false;
        }
        for(char x : s)
        {
            letters[x] += 1;
        }
        for(char x : t)
        {
            if(letters.find(x) == letters.end() || letters[x] == 0){
                return false;
            }
            letters[x] -= 1;
        }
        return true;
    }
};