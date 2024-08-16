class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        sort (arrays.begin() , arrays.end());

        int min1 = arrays[0][0] , max1 = INT_MIN , min2=INT_MAX , max2 = arrays[0][arrays[0].size()-1];

        for(int i=1 ; i < arrays.size() ; i++){
            max1 = max (max1 , arrays[i][arrays[i].size()-1]);
            min2 = min (min2 , arrays[i][0]);
        }
        
        return max (max1 - min1 , max2 - min2); 
    }
};