class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int last=0,ans=0;
        for(int i=0;i<bank.size();i++){
            int present=0;
            for(int j=0;j<bank[i].size();j++){
                if(bank[i][j]=='0') continue;
                present++;
            }
            if(present!=0){
            ans+=last*present;
            last=present;
            }
        }
        return ans;
    }
};