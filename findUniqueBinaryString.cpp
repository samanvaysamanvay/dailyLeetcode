class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i;
        for (i = 0; i < n; i++) {
            if (i != stoi(nums[i], 0, 2)) {
                int len = nums[0].length();
                string result = "";

                for (int j = 0; j < len; j++) {
                    result = char('0' + (i % 2)) + result;
                    i = i / 2;
                }

                return result;
            }
        }
        int len = nums[0].length();
        string result = "";
        for (int j = 0; j < len; j++) {
            result = char('0' + (i % 2)) + result;
            i = i / 2;
        }
        return result;
    }
};
