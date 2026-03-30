class Solution {
    public int firstMissingPositive(int[] nums) {
        int ans=1;
        Arrays.sort(nums);
        for(int i:nums)
        {
            if(i>0 && ans==i)
            {
                ans++;
            }
        }
        return ans;
    }
}