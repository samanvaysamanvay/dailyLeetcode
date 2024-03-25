class Solution {
public:
std::vector<int> findDuplicates(std::vector<int>& nums) {
    std::unordered_map<int, int> mp;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        mp[nums[i]]++;
    }

    std::vector<int> ans;

    for (const auto& x : mp) {
        if (x.second == 2) {
            ans.push_back(x.first);
        }
    }

    return ans;
}
};