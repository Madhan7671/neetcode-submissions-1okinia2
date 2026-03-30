class Solution {
    public int[] dailyTemperatures(int[] temp) {
        Stack<Integer>st=new Stack<>();
        int n=temp.length;
        int[] ans=new int[n];
        Arrays.fill(ans,0);
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty() && temp[st.peek()]<=temp[i])
            {
                st.pop();
            }
            if(!st.empty())
            {
                ans[i]=st.peek()-i;
            }
            st.push(i);
        }
        return ans;
    }
}
