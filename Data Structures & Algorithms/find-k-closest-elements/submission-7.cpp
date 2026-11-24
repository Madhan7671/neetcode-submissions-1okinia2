class Solution {
public:
    vector<int> findClosestElements(vector<int>& nums, int k, int x) {
        int left=0;
        int right=nums.size()-k;
        while(left<right){
            int mid=(left+right)/2;
            if(x-nums[mid]>nums[mid+k]-x)
            {
                left=mid+1;
            }
            else{
                right=mid;
            }
        }
        vector<int>ans(nums.begin()+left,nums.begin()+left+k);
        return ans;
    }
};