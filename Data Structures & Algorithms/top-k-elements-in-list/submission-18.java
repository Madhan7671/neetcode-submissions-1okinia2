class Solution {
    public int[] topKFrequent(int[] nums, int k) {
        Map<Integer,Integer>mp1=new HashMap<>();
        for(int i:nums)
        {
            mp1.put(i,mp1.getOrDefault(i,0)+1);
        }
        int[] ans=new int[k];
        PriorityQueue<Integer>pq=new PriorityQueue<>((a,b)->mp1.get(a)-mp1.get(b));
        for(int i:mp1.keySet())
        {
            pq.offer(i);
            if(pq.size()>k)
            {
                pq.poll();
            }
        }
        int i=0;
        while(!pq.isEmpty())
        {
            ans[i]=pq.peek();
            pq.poll();
            i++;
        }
        return ans;
    }
}
