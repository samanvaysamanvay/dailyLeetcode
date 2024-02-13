class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        int i,flag=0;
        for(i=0;i<words.size();i++){
            string s=words[i];
                reverse(s.begin(),s.end());
            if(words[i]==s){
                flag=1;
                break;
            }
        }
        if(flag==1)
            return words[i];
        else
            return "";
        }
};