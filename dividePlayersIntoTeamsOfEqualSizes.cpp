class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        
        int n = skill.size();
        long long required_sum = skill[0] + skill[n-1], chemistry = skill[0] * skill[n-1];
        
        for(int i = 1; i < n/2; i++){
            if(skill[i] + skill[n - 1 - i] != required_sum) return -1;
            chemistry += skill[i] * skill[n - i - 1];
        }        

        return chemistry;
    }
};