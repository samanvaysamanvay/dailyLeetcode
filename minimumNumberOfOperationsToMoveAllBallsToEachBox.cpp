class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        int sum;
        for(int i=0;i<boxes.length();i++){
            sum=0;
            for(int j=0;j<boxes.length();j++){
                if(i!=j && boxes[j]=='1')
                    sum=sum+abs(i-j);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};