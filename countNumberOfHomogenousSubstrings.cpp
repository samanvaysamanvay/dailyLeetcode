class Solution {
public:
    int MOD=1e9+7;
    int countHomogenous(string s) {
        int count=0,i=0;
        while(i<s.length()){
            char a=s[i];
            int c=1;
            count++;
            i++;
            while(i<s.length() && s[i]==a){
                c++;
                count=count+c;
                count=count%MOD;
                i++; 
            }
        }
        return count;
    }
};