class Solution {
public:
    string customSortString(string order, string s) {
        vector<int> count(26, 0);
        for (char ch : s) {
            count[ch - 'a']++;
        }
        string ans = "";
        for (char ch : order) {
            if (count[ch - 'a']) {
                ans += string(count[ch - 'a'], ch);
                count[ch - 'a'] = 0;
            }
        }
        for (int i = 0; i < 26; i++) {
            if (count[i]) {
                ans += string(count[i], char('a' + i));
            }
        }

        return ans;
    }
};
