class Solution {
public:

   
    int maximumLength(vector<int>& nums) {
        int ae = 0, ao = 0, od = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0) {
                ae++;
            } else {
                ao++;
            }
        }
        bool eo = true;
        bool ee = true;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] % 2 == 0 && ee) {
                od++;
                ee = false;
                eo = true;
            } else if (nums[i] % 2 != 0 && eo) {
                od++;
                eo = false;
                ee = true;
            }
        }

        return max({ae, ao, od});
    }
};
