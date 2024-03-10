class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s,t;
        for(int i=0;i<nums2.size();i++){
            s.insert(nums2[i]);
        }
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            if(s.count(nums1[i]) && !t.count(nums1[i])){
                 ans.push_back(nums1[i]);
                 t.insert(nums1[i]);
            }
        }
        return ans;
    }
};