class Solution {
    public int longestConsecutive(int[] nums) {
        Set<Integer>st=new HashSet<>();
        for(int i:nums)
        {
            st.add(i);
        }
        int ans=0;
        for(int i:nums)
        {
            if(!st.contains(i-1))
            {
                int count=1;
                int x=i+1;
                while(st.contains(x))
                {
                    count++;
                    x++;
                }
                ans=Math.max(ans,count);
            }
        }
        return ans;
    }
}
