class Solution {
    public:
        string solver(int n,int i,string &str){
            if(n==i) return str;
            string ans="";
            int k=0;
            while(k<str.length()){
                int counter=1;
                char a=str[k];
                for(int j=k+1;j<str.length();j++){
                    if(str[j]==a) counter++;
                    else break;
                }
                ans=ans+to_string(counter)+a;
                k+=counter; 
            }
            str=ans;
            return solver(n,i+1,str);
        }
        string countAndSay(int n) {
            string str="1";
            return solver(n,1,str);
        }
    };