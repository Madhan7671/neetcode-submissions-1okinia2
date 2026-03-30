class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        bool a=false;
        bool b=false;
        bool c=false;
        for(auto& i:triplets)
        {
            if(i[0]<=target[0] && i[1] <=target[1] && i[2] <= target[2])
            {
                if(i[0]==target[0])
                {
                    a=true;
                }
                if(i[1]==target[1])
                {
                    b=true;
                }
                if(i[2]==target[2])
                {
                    c=true;
                }
            } 
        }
        return(a && b && c);
    }
};
