class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int currentMax = arr[arr.size()-1];
        int temp = 0;
        for(int i = arr.size()-1; i>=0; i--){
            if(arr[i] > currentMax){
                cout << currentMax << '<' << arr[i]<< '\n';
                temp = arr[i];
                arr[i] = currentMax;
                currentMax = temp;
            }
            else{
                arr[i] = currentMax;

            }
        }
        arr[arr.size()-1] = -1;

        return arr;
    }
};