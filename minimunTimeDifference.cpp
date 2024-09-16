class Solution {
public:
    int timeToMinutes(const string& time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));
        
        return hours * 60 + minutes;
    }
    int findMinDifference(vector<string>& timeSlots) {
        sort(timeSlots.begin(),timeSlots.end());
        
        int ans = INT_MAX;

    for (int i = 1; i < timeSlots.size(); ++i) {
        int prevTime = timeToMinutes(timeSlots[i - 1]);
        int currTime = timeToMinutes(timeSlots[i]);
        
        ans = min(ans,abs(currTime - prevTime));
    }
    
    ans = min(ans,1440 - abs(timeToMinutes(timeSlots[0]) - timeToMinutes(timeSlots[timeSlots.size()-1])));
        return ans;
    }
};