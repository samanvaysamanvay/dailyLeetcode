class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int val=pref[0],temp;
        for(int i=1;i<pref.size();i++){
            temp=pref[i];
            pref[i]=val^pref[i];
            val=temp;
        }
        return pref;
    }
};