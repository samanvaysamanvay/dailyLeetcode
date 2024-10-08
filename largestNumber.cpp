class Solution {
public:
    static bool compare(int a,int b){
        string s1 = to_string(a);
        string s2 = to_string(b);
        return s1 + s2 > s2 + s1;
    }
    string largestNumber(vector<int> &num) {
        sort(num.begin(),num.end(),compare);

        string ans = "";

        for(int i = 0; i < num.size(); i++){
            ans += to_string(num[i]);
        }
        return ans[0]=='0' ? "0" : ans;
    }
};