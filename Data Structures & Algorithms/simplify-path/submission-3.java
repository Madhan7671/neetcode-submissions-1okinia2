class Solution {
    public String simplifyPath(String path) {
        Deque<String>st=new ArrayDeque<>();
        for(String s:path.split("/")){
            if(s.equals("") || s.equals("."))
            {
                continue;
            }
            else if(s.equals(".."))
            {
                if(!st.isEmpty())
                {
                    st.removeLast();
                }
            }
            else{
                st.addLast(s);
            }
        }
        StringBuilder sb=new StringBuilder();
        for(String i:st)
        {
            sb.append("/").append(i);
        }
        return((sb.length()==0)?"/":sb.toString());
    }
}