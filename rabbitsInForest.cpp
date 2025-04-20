class Solution {
    public:
        int numRabbits(vector<int>& answers) {
            unordered_map<int,int> mp;
            for(int i=0;i<answers.size();i++){
                mp[answers[i]]++;
            }
            int sum=0;
            for(auto i:mp){
                if(i.second>i.first+1){
                    if(i.second%(i.first+1)==0) sum+=i.second;
                    else sum+=(i.second/(i.first+1))*(i.first+1)+(i.first+1);
                }
                else sum+=i.first+1;
            }
            return sum;
        }
    };