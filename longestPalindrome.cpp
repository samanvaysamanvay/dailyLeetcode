class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        for(char c:s){
            mp[c]++;
        }
        int ans=0;
        for(auto i:mp){
            if(i.second%2==0) ans+=i.second;
            else ans+=i.second-1;
        }
        if(ans<s.length()) return ans+1;
        else return ans;
    }
};