class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(),points.end());
        int ans=0,right=points[0][1];
        for(int i=1;i<points.size();i++){
            if(points[i][0]>right){
                ans++;
                right=points[i][1];
            }
            right=min(right,points[i][1]);
        }
        return ans+1;
    }
};