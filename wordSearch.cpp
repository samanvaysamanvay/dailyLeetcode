class Solution {
public:
    int flag=0;
    void dfs(vector<vector<char>>& board, string word,set<pair<int,int>>& st,string& s,int i,int j,int l){
            if(s==word || flag==1){
                flag=1;
                return;
            }
            if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || st.count({i,j}) || st.size()==word.length() || board[i][j]!=word[l]) return;
            s.push_back(board[i][j]);
            st.insert({i,j}); 
            if(l+1<=word.length()){
            dfs(board,word,st,s,i,j+1,l+1);
            dfs(board,word,st,s,i,j-1,l+1);                     
            dfs(board,word,st,s,i+1,j,l+1);
            dfs(board,word,st,s,i-1,j,l+1);
            }
            s.pop_back();
            st.erase({i,j});
    }
    bool exist(vector<vector<char>>& board, string word) {
        int count=1;
        for(int i=1;i<word.length();i++){
            if(word[i]==word[i-1]){
                count++;
            }
            else break;
        }
        if(count>word.length()-count) reverse(word.begin(),word.end());
        set<pair<int,int>> st;
        string s;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[0].size();j++){
                if(board[i][j]==word[0]){
                    dfs(board,word,st,s,i,j,0);
                    if(flag==1){
                         return true;
                    }
                }
            }
        }
        return false;
    }
};

