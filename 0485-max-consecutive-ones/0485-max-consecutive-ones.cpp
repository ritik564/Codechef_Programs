class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0;
        int ans = 0;

        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i] == 1)
            {
                count++;
            }
            else{
                ans = max(ans,count);
                count = 0;
            }
        }
        if(count > ans)
        {
            ans = count;
        }
        return ans;
    }
};