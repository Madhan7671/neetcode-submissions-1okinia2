#include<bits/stdc++.h>
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(string i:tokens)
        {
            if(i!="*" && i!="/" && i!="-" && i!="+")
            {
                st.push(stoi(i));
            }
            else if(i=="*" || i=="/" || i=="+" || i=="-")
            {
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(i == "*") st.push(b * a);
                if(i == "/") st.push(b / a);
                if(i == "+") st.push(b + a);
                if(i == "-") st.push(b - a);
            }
            else{
                return 0;
            }
        }
        return(st.top());
    }
};
