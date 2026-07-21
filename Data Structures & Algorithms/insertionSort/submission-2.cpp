class Solution {
public:
    vector<vector<Pair>> insertionSort(vector<Pair>& pairs) {
        vector<vector<Pair>> sorted = {};
        if (pairs.empty()) return sorted;
        for(int i=1; i< pairs.size(); i++){
            int j = i - 1;
            sorted.push_back(pairs);
            while(j >= 0 && pairs[j+1].key < pairs[j].key){
                Pair tmp = pairs[j+1];
                pairs[j+1] = pairs[j];
                pairs[j] = tmp;
                j--;
            }
            
        }
        sorted.push_back(pairs);
        return sorted;
    }
};