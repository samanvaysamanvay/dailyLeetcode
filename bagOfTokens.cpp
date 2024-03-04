class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        if(tokens.size()==0) return 0;
        sort(tokens.begin(),tokens.end());
        int max_score=0,score=0;
        if(power<tokens[0]) return 0;
        int i=0,j=tokens.size()-1;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                max_score=max(max_score,score);
            }
            else if(score>=1){
                power+=tokens[j];
                j--;
                score--;
            }
            else break;
        }
        return max_score;
    }
};