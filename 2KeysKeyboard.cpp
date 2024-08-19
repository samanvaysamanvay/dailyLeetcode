class Solution {
public:
    int solve(int n,int printed,int copied){
        if(n == printed) return 0;
        if(printed > n) return 10000;
        
        int copy,paste;
        
        if(printed == copied) copy = INT_MAX;
        else copy = 1 + solve(n, printed, printed);
        paste = 1 + solve(n, printed + copied, copied);

        return min(copy,paste);
    }
    int minSteps(int n) {
        if(n == 1) return 0;
        return  1 + solve(n,1,1);
    }
};