class MyCalendar {
    unordered_map<int, int> mp;
public:
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for (const auto& i : mp) {
            int existingStart = i.first;
            int existingEnd = i.second;

            if (start < existingEnd && end > existingStart) {
                return false;  
            }
        }

        mp[start] = end;
        return true;
    }
};


/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */