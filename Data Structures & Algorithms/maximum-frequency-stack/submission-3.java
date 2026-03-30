class FreqStack {

    public FreqStack() {
        
    }
    Map<Integer,Integer>mp1=new HashMap<>();
    Map<Integer,Stack<Integer>>mp2=new HashMap<>();
    int maxfreq=Integer.MIN_VALUE;
    public void push(int val) {
        int f=mp1.getOrDefault(val,0)+1;
        mp1.put(val,f);
        maxfreq=Math.max(maxfreq,f);
        mp2.putIfAbsent(f,new Stack<>());
        mp2.get(f).push(val);
    }
    
    public int pop() {
        int a=mp2.get(maxfreq).peek();
        mp2.get(maxfreq).pop();
        mp1.put(a,mp1.getOrDefault(a,0)-1);
        if(mp2.get(maxfreq).isEmpty())
        {
            maxfreq--;
        }
        return a;
    }
}

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack obj = new FreqStack();
 * obj.push(val);
 * int param_2 = obj.pop();
 */