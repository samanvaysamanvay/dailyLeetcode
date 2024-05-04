class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int left=0,right=people.size()-1,ans=0;
        while(left<=right){
            if(people[left]+people[right]<=limit){
                ans++;
                left++;
                right--;
            }
            else{
                right--;
                ans++;
            }
        }
        return ans;
    }
};