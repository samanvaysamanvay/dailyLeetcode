#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<long long> subarraySums;
        for(int i = 0; i < nums.size(); i++) {
            long long currentSum = 0;
            for(int j = i; j < nums.size(); j++) {
                currentSum += nums[j];
                subarraySums.push_back(currentSum);
            }
        }
        sort(subarraySums.begin(), subarraySums.end());
        long long ans = 0;
        for(int i = left - 1; i < right; i++) {
            ans = (ans + subarraySums[i]) % 1000000007;
        }
        
        return static_cast<int>(ans);
    }
};
