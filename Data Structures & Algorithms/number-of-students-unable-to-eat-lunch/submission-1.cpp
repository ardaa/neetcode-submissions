class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int served = students.size();
        int startSize = -1;
        while(startSize != students.size()){
            startSize = students.size();
            for(int i : students){
                cout << students[0] << ' ' << sandwiches[0] << '\n';
                if(students[0] == sandwiches[0]){
                    students.erase(students.begin());
                    sandwiches.erase(sandwiches.begin());
                    served--;
                }
                else{
                    students.push_back(students[0]);
                    students.erase(students.begin());
                }
            
            }
        }
        return served;
    }
};