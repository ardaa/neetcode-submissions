class Solution {
public:
    int calPoints(vector<string>& operations) {
        std::stack<string> s;
        for(string op : operations){
            
                if(op == "+"){
                    string prev = s.top();
                    s.pop();
                    string push = std::to_string(std::stoi(s.top()) + std::stoi(prev));
                    s.push(prev);
                    s.push(push);
                }
                else if(op == "D"){
                    s.push(std::to_string(std::stoi(s.top())*2));
                }
                else if(op ==  "C"){
                    s.pop();
                }
                else {
                    s.push(op);
                }
            }
        int sum = 0;
        while(!s.empty()){
            sum += std::stoi(s.top());
            s.pop();
        }
        return sum;
    }
};