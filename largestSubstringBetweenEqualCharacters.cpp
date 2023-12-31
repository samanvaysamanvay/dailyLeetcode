class Solution {
public:
    int maxLengthBetweenEqualCharacters(string s) {
        int maxSubstring=-1;
        vector<int> first(26,-1);
        for(int i=0;i<s.length();i++){
            if(first[int(s[i]-'a')]!=-1){
                maxSubstring=max(maxSubstring,i-first[int(s[i]-'a')]-1);
            }
            else first[int(s[i]-'a')]=i;
        }
        return maxSubstring;
    }
};