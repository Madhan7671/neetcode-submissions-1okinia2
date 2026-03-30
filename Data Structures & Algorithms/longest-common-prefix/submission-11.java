class Solution {
    public String longestCommonPrefix(String[] strs) {
        Arrays.sort(strs);
        String left=strs[0];
        String right=strs[strs.length-1];
        int m=left.length();
        int n=right.length();
        int i=0;
        while(i<Math.min(m,n) && left.charAt(i)==right.charAt(i))
        {
            i++;
        }
        return(left.substring(0,i));
    }
}