class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        int i=0,n=students.size(),count=0;
        while(i<sandwiches.size()){
            if(sandwiches[i]==q.front()){
                q.pop();
                i++;
                n--;
                count=0;
            }
            else{
                int temp=q.front();
                q.push(temp);
                q.pop();
                count++;
            }
            if(count==n) return count;
        }
        return 0;
    }
};