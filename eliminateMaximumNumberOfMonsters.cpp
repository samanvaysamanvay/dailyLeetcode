class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        vector<float> time(dist.size(),0);
        for(int i=0;i<dist.size();i++){
            time[i]=float(dist[i])/speed[i];
        }
        int count=1;
        sort(time.begin(),time.end());
        for(int i=1;i<time.size();i++){
            if(time[i]-i>0) count++;
            else break;
        }
        return count;
    }
};