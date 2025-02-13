class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long long,vector<long long>,greater<long long>> pq;
    
            for(int i = 0; i < nums.size(); i++){
                pq.push(nums[i]);
            }
            
            int ans = 0;
    
            while(pq.size() >= 2 && pq.top() < k){
                long long a = pq.top();
                pq.pop();
                long long b = pq.top();
                pq.pop();
    
                long long c = min(a,b)*2 + max(a,b);  
    
                pq.push(c);
    
                ans++; 
            }
    
            return ans;
        }
    };