class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if (bloomDay.size() /k< m ) return -1;
        int maxDay = *max_element(bloomDay.begin(), bloomDay.end()), minDay = 1;
        int ans = -1;
        
        while (minDay <= maxDay) {
            int mid = (maxDay + minDay) / 2;
            int adj = 0, bouquet = 0;
            for (int i = 0; i < bloomDay.size(); i++) {
                if (bloomDay[i] <= mid) adj++;
                else adj = 0;
                if (adj == k) {
                    adj = 0;
                    bouquet++;
                }
            }
            if (bouquet >= m) {
                ans = mid;
                maxDay = mid - 1;
            } else {
                minDay = mid + 1;
            }
        }
        return ans;
    }
};
