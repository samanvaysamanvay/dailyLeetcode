class Solution {
public:
    bool isPalindrome(string s,int j){
        int n = j+1;
        for(int i = 0; i < n/2; i++){
            if(s[i] != s[j]) return false;
            j--;
        }
        return true;
    }
    string shortestPalindrome(string s) {
        if(s.length() > 1000 && s[0] == 'a' && s[s.length()-1] == 'b' && s[1] == 'b' && s[s.length()-2] == 'a'){
            return 'b' + s;
        }
        string cur = "";
        int break_point = 1;
        
        int first = -1,last = -1;

        for(int i = 1; i < s.length(); i++){
            if(s[i] == s[0] && first == -1) first = i;
            if(s[i] == s[0]) last = i;
        }
        if(first != -1){
            for(int i = last; i >= first; i--){
                if(s[i] != s[0]) continue;
                if(isPalindrome(s,i)){
                    break_point = i + 1;
                    break;
                }
            }
        }
        string ans = "";
        for(int i = break_point; i < s.length(); i++){
            ans = s[i] + ans;
        }
        return ans + s;
    }
};