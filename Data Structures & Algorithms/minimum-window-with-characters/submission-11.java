class Solution {
    public String minWindow(String s, String t) {
        int left=0;
        int right=0;
        int index=-1;
        int ans=Integer.MAX_VALUE;
        int total=t.length();
        Map<Character,Integer>mp=new HashMap<Character,Integer>();
        char[] ch=t.toCharArray();
        for(char i:ch)
        {
            mp.put(i,mp.getOrDefault(i,0)+1);
        }
        int n=s.length();
        char[] ch2=s.toCharArray();
        while(right<n)
        {
            mp.put(ch2[right],mp.getOrDefault(ch2[right],0)-1);
            if(mp.get(ch2[right])>=0)
            {
                total--;
            }
            while(total==0 && left<=right)
            {
                if(ans>(right-left+1))
                {
                    ans=right-left+1;
                    index=left;
                }
                mp.put(ch2[left],mp.getOrDefault(ch2[left],0)+1);
                if(mp.get(ch2[left])>0)
                {
                    total++;
                }
                left++;
            }
            right++;
        }
        return((ans==Integer.MAX_VALUE ? "":s.substring(index,index+ans)));
    }
}
