class Solution {
public:
    int minimumPushes(string word) {
        vector<int> count(26,0);
        for(int i=0;i<word.size();i++){
            count[word[i]-'a']++;
        }
        sort(count.begin(),count.end(),greater<int>());
        int j=0,ans=0,flag=0,touches=1;
        while(j<26 && count[j]!=0){
            ans+=(count[j]*touches);
            flag++;
            if(flag==8){
                touches++;
                flag=0;
            }
            j++;
        }
        return ans;
    }
};