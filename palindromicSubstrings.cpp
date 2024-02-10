class Solution {
public:
    int countSubstrings(string s) {
        int flag,l,r,i,count=0;
        for(i=0;i<s.length();i++){
            l=i;
            r=i;
            flag=0;
            while(flag==0 && l>=0 && r<s.length()){
               if(s[l]==s[r]){
                   count++;
                   l--;
                   r++;
               }
               else{
                   flag=1;
               }
            }
        }
        for(i=0;i<s.length();i++){
            l=i;
            r=i+1;
            flag=0;
            while(flag==0 && l>=0 && r<s.length()){
               if(s[l]==s[r]){
                   count++;
                   l--;
                   r++;
               }
               else{
                   flag=1;
               }
            }
        }
        return count;
    }
};