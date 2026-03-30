class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string ch:tokens)
        {
            if(ch !="+" && ch!="-" && ch!="/" && ch!="*")
            {
                st.push(stoi(ch));
            }
            else if(ch =="+" || ch=="-" || ch=="/" || ch=="*"){
                int b=st.top();
                st.pop();
                int a=st.top();
                st.pop();
                if(ch=="+")
                {
                    st.push(a+b);
                }
                if(ch=="-")
                {
                    st.push(a-b);
                }
                if(ch=="/")
                {
                    st.push(a/b);
                }
                if(ch=="*")
                {
                    st.push(a*b);
                }
            }
            else{
                return 0;
            }
        }
        return st.top();
    }
};
