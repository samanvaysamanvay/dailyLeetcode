class Solution {
public:
    vector<int> restoreArray(vector<vector<int>>& a) {
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<a.size();i++){
            mp[a[i][0]].push_back(a[i][1]);
            mp[a[i][1]].push_back(a[i][0]);
        }
        vector<int> ans(mp.size(),0);
        vector<int> fl;
        for(auto i:mp){
           if(i.second.size()==1){
              fl.push_back(i.first);
              if(fl.size()==2) break;
           } 
        }
        ans[0]=fl[0];
        ans[ans.size()-1]=fl[1];
        set<int> st;
        st.insert(fl[0]);
        st.insert(fl[1]);
        for(int i=1;i<(ans.size()/2)+1;i++){
           for(int j=0;j<mp[ans[ans.size()-i]].size();j++){
                if(!st.count(mp[ans[ans.size()-i]][j])){
                    st.insert(mp[ans[ans.size()-i]][j]);
                    ans[ans.size()-i-1]=mp[ans[ans.size()-i]][j];
                } 
           }            
            for(int j=0;j<mp[ans[i-1]].size();j++){
                if(!st.count(mp[ans[i-1]][j])){
                    st.insert(mp[ans[i-1]][j]);
                    ans[i]=mp[ans[i-1]][j];
                }
            }
        }
    return ans;
    }
};