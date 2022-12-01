class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int leftSum =  0;
        int rightSum = accumulate(nums.begin(), nums.end(), 0);
        int length = nums.size();
        for (int i = 0; i < length; i++){
            rightSum -= nums[i];
            if (rightSum == leftSum)
                return i;
            leftSum += nums[i];
        }
        return -1;
    }
};