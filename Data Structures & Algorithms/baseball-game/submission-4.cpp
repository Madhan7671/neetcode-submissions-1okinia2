class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        for(string i:operations)
        {
            if(i=="+")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.push(a);
                st.push(a+b);
            }
            else if(i=="C")
            {
                st.pop();
            }
            else if(i=="D")
            {
                int a=st.top();
                st.push(a*2);
            }
            else{
                st.push(stoi(i));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};