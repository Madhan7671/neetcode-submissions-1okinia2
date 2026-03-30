class Solution {
    public boolean isPalindrome(String s) {
        String ans="";
        for(char ch:s.toCharArray())
        {
            if(Character.isLetterOrDigit(ch))
            {
                ans+=Character.toLowerCase(ch);
            }
        }
        int low=0;
        int high=ans.length()-1;
        char[] ans2=ans.toCharArray();
        while(low<=high)
        {
            if(ans2[low]!=ans2[high])
            {
                return false;
            }
            low++;
            high--;
        }
        return true;
    }
}
