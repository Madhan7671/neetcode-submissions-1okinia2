class Solution {
    public int subarraySum(int[] nums, int k) {
        int ans=0;
        int currsum=0;
        Map<Integer,Integer> mp1=new HashMap<>();
        mp1.put(0,1);
        for(int i:nums)
        {
            currsum+=i;
            int diff=currsum-k;
            ans+=mp1.getOrDefault(diff,0);
            mp1.put(currsum,mp1.getOrDefault(currsum,0)+1);
        }
        return ans;
    }
}