class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
        unordered_map<string,int> mp;
        string ans="";
        for(string c:dictionary){
            mp[c]++;
        }
        for(int i=0;i<sentence.length();i++){
            string c="";
            while(i<sentence.length() && sentence[i]!=' '){
                if(mp[c]!=0){
                    i++;
                    continue;
                }
                else{
                    c+=sentence[i];
                }
                i++;
            }
            if(ans!="") ans+=" "+c;
            else ans+=c;
        }
        return ans;
    }
};