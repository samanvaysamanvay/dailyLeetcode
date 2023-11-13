class Solution {
public:
    string sortVowels(string s) {
       vector<char> vowels;
       for(int i=0;i<s.length();i++){
           if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               vowels.push_back(s[i]);
           }
       }
       int j=0;
       sort(vowels.begin(),vowels.end());
       for(int i=0;i<s.length();i++){
           if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
               s[i]=vowels[j];
               j++;
           }           
       }
       return s; 
    }
};