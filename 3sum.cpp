class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        
        // Step 1: Sort the array
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // Step 2: Fix the first number and use two pointers for the rest
        for (int i = 0; i < n - 2; ++i) {
            // Skip duplicate first elements
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            // Step 3: Two pointer approach
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {
                    res.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left and right
                    while (left < right && nums[left] == nums[left + 1])
                        ++left;
                    while (left < right && nums[right] == nums[right - 1])
                        --right;

                    ++left;
                    --right;
                } else if (sum < 0) {
                    ++left;  // Need a bigger sum
                } else {
                    --right; // Need a smaller sum
                }
            }
        }

        return res;
    }
};
