class Solution {
public:
    bool checkInclusion(string s1, string s2) {
    unordered_map<char,int> str1,str2;
    for(auto it='a';it<='z';it++){
        str1[it]=0;
        str2[it]=0;
    }
    for(int i=0;i<s1.length();i++){
        str1[s1[i]]++;
    }
    if(s1.length()>s2.length()){
    return false;
    }
    for(int i=0;i<s1.length();i++){
        str2[s2[i]]++;
    }
    int flag,l=0,r=s1.length()-1;
    while(r<s2.length()){
        flag=0;
        for(auto it='a';it<='z';it++){
            if(str1[it]!=str2[it]){
             flag=1;
             break; 
            }
        }
        if(flag==0){
            return true;
        }
        l++;
        r++;
        str2[s2[l-1]]--;
        str2[s2[r]]++;
    }
    return false;
    }
};