class Solution {
    public int lengthOfLongestSubstring(String s) {
        Map<Character,Integer>mp=new HashMap<>();
        int ans=0;
        int left=0;
        char[] ch=s.toCharArray();
        for(int i=0;i<ch.length;i++)
        {
            if(mp.containsKey(ch[i]) && mp.get(ch[i])>=left)
            {
                left=mp.get(ch[i])+1;
            }
            mp.put(ch[i],i);
            ans=Math.max(ans,i-left+1);
        }
        return ans;
    }
}
