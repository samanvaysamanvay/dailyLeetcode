class Solution {
public:
    int minimumLength(string s) {
        int i=0,j=s.length()-1;
        while(i<j && s[i]==s[j]){
            char a=s[i];
            while(j>=0 && s[j]==a) j--;
            
            while(i<s.length() && s[i]==a) i++;
        }
        return j<i?0:j-i+1;
    }
};