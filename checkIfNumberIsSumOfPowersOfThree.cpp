class Solution {
    public:
        vector<bool> power;
    
        bool solve(long long n, int i){
            if(n == 0) return true;
            if(n < 0) return false;
            if(i < 0) return false;
            if(power[i]) return power[i];
    
            bool take = solve(n - pow(3,i), i-1);
    
            bool not_take = solve(n, i-1);
    
            return power[i] = (take || not_take);
        }
        bool checkPowersOfThree(int n) {
            int y = log(n)/log(3);
            power.resize( y + 1 , false);  
    
            return solve(n, y);         
        }
    };