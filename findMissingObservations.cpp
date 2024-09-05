class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {
        int n_total , m = rolls.size();

        for(int i = 1; i < m; i++) rolls[i] += rolls[i-1];
        
        cout<<rolls[m-1]<<"\n";
        n_total  = ((n + m) * mean) - rolls[m-1];
        cout<<n_total;
        vector<int> arr;

        if(n_total > n * 6 || n > n_total) return arr;

        int cur_num = 5;

        while(n != 0){
            while(n > 0 && (cur_num * n < n_total)){
                arr.push_back(cur_num + 1);
                n--;
                n_total -=cur_num + 1;
            }
        cur_num--;
        }
    return arr;
    }    
};