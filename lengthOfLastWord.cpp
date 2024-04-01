class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.length()-1;
        int count=0;
        while(s[n]==' ') n--;
        while(n!=-1 && s[n]!=' '){
            n--;
            count++;
        }
        return count;
    }
};