class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int ans=0;
        string s="";
        for(int i=0;i<colors.length();){
            int curtime=0;
            int maxtime=neededTime[i];
            s+=colors[i];
            while(i<colors.length() && colors[i]==s.back()){
                  curtime+=neededTime[i];
                  if(maxtime<neededTime[i]) maxtime=neededTime[i];
                  i++;
            }
            if(curtime!=maxtime) ans+=(curtime-maxtime);  
        }
        return ans;
    }
};