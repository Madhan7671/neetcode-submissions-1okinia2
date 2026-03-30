class Solution {
    public int[] asteroidCollision(int[] asteroids) {
        Stack<Integer>st=new Stack<>();
        for(int i:asteroids)
        {
            boolean destroy=false;
            while(!st.empty() && i<0 && st.peek()>0)
            {
                if(Math.abs(st.peek())<Math.abs(i))
                {
                    st.pop();
                    continue;
                }
                else if(Math.abs(st.peek())==Math.abs(i))
                {
                    st.pop();
                }
                destroy=true;
                break;
            }
            if(destroy==false)
            {
                st.push(i);
            }
        }
        int[] arr=new int[st.size()];
        for(int i=st.size()-1;i>=0;i--)
        {
            arr[i]=st.peek();
            st.pop();
        }
        return arr;
    }
}