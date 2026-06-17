class MinStack {
private:
        int pointer = 0;
        vector<int> stackArr;
        vector<int> minHistory;
public:
    MinStack() {
            
    }

    
    
    void push(int val) {
        if (pointer >= stackArr.size()) {
            stackArr.push_back(val);
            if (pointer == 0) minHistory.push_back(val);
            else minHistory.push_back(min(val, minHistory.back()));
        } else {
            stackArr[pointer] = val;
            if (pointer == 0) minHistory[pointer] = val;
            else minHistory[pointer] = min(val, minHistory[pointer - 1]);
        }
        pointer++;
    }
    
    void pop() {
        pointer--;
    }
    
    int top() {
        return stackArr[pointer - 1];
    }
    
    int getMin() {
        return minHistory[pointer - 1];
    }
};