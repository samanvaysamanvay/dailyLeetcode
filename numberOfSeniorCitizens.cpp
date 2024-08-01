class Solution {
public:
    int countSeniors(vector<string>& details) {
        int ans=0;
        for(auto person:details){
            int num=10*(person[11]-'0');
            num+=person[12]-'0';
            if(num>60) ans++;
        }
        return ans;
    }
};