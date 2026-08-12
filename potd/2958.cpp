#include<iostream>
#include<vector> 

#include <unordered_map>

using namespace std;


class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
       int maxAns = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {
            // 1. Add current element to frequency map
            mp[nums[j]]++;

            // 2. Shrink window from the left until nums[j]'s frequency is <= k
            while (mp[nums[j]] > k) {
                mp[nums[i]]--;
                i++;
            }

            // 3. Update maximum valid window size
            maxAns = max(maxAns, j - i + 1);
        }

        return maxAns;
    }
};


int main() {
    Solution sol;
    vector<int> nums = {1,2,3,1,2,3,4};
    int k = 2;
    int result = sol.maxSubarrayLength(nums, k);
    cout << "Maximum length of subarray with at most " << k << " occurrences of any element: " << result << endl;
    return 0;
}