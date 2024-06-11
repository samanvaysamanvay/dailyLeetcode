class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int> countMap;
        vector<int> remainingElements;

        for (int num : arr1) {
            countMap[num]++;
        }

        int index = 0;
        for (int num : arr2) {
            while (countMap[num] > 0) {
                arr1[index++] = num;
                countMap[num]--;
            }
        }

        for (auto& entry : countMap) {
            while (entry.second > 0) {
                remainingElements.push_back(entry.first);
                entry.second--;
            }
        }

        sort(remainingElements.begin(), remainingElements.end());

        for (int num : remainingElements) {
            arr1[index++] = num;
        }

        return arr1;
    }
};