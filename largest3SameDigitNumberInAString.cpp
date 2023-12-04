class Solution {
public:
    string largestGoodInteger(string num) {
        int ans=-1;
          for(int i=0;i<num.length()-2;i++){
              if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                 if(ans!=-1){
                     if(num[i]>num[ans]) ans=i;
                 }
                 else ans=i;
                 i=i+2;
              } 
          }
           if(ans==-1)  return "";
           string result="";
           result+=num[ans];
           result+=num[ans];
           result+=num[ans];
           return result;
    }
};