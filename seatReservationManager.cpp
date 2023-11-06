class SeatManager {
    priority_queue<int,vector<int>,greater<int>> unreserved;
    int seat_no=0;
public:
    SeatManager(int n) {
        
    }
    
    int reserve() {
        if(unreserved.empty()){
            seat_no++;
            return seat_no;
        }
        else{
            if(seat_no+1>=unreserved.top()){
               int temp=unreserved.top();
               unreserved.pop();
               return temp;
            }
            else{
                seat_no++;
                return seat_no;
            }
            
        }
    }
    
    void unreserve(int seatNumber) {
        unreserved.push(seatNumber);
    }
};

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */