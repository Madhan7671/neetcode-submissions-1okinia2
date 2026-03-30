class Solution {
    public List<List<String>> groupAnagrams(String[] strs) {
        Map<String,List<String>>mp1=new HashMap<>();
        for(String s:strs)
        {
            char[] x=s.toCharArray();
            Arrays.sort(x);
            String key=new String(x);
            mp1.putIfAbsent(key,new ArrayList<>());
            mp1.get(key).add(s);
        }
        List<List<String>>ans=new ArrayList(mp1.values());
        return ans;
    }
}
