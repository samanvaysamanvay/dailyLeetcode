class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> mp(26,0);
        for(int i=0;i<s.length();i++){
            mp[int(s[i]-'a')]++;
            mp[int(t[i]-'a')]--;
        }
        int ans=0;
        for(int i=0;i<26;i++)   ans=ans+(mp[i]>0?mp[i]:0);
        return ans;
    }
};