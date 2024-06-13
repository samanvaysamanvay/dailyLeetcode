class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
      sort(seats.begin(),seats.end());  
      sort(students.begin(),students.end());
        int sum=0;
        for(int i=0;i<seats.size();i++){
            if(seats[i]>=students[i])
                sum=sum+seats[i]-students[i];
            else
                sum=sum+students[i]-seats[i];
        }
        return sum;
    }
};