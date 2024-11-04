class Solution {
public:
    string compressedString(string word) {
        string ans="";
        for(int i=0;i<word.size();i++){
            int count=0;
            char c=word[i];
            while(i<word.size() && count<9 && word[i]==c){
                count++;
                i++;
            }
            ans+='0'+count;
            ans+=c;
            if(i==word.size()) return ans;
            i--;
        }
        return ans;
    }
};