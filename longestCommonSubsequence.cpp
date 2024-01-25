class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int r=text1.length()+1;
        int c=text2.length()+1;
        int ans[r][c];
        for(int i=0;i<r;i++){
            ans[i][0]=0;
        }
        for(int i=0;i<c;i++){
            ans[0][i]=0;
        }
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                if(text1[i-1]==text2[j-1]){
                    ans[i][j]=ans[i-1][j-1]+1;
                }
                else{
                    ans[i][j]=max(ans[i-1][j],ans[i][j-1]);
                }
            }
        }
        return ans[r-1][c-1];
    }
};