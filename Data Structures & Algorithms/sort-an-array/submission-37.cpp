class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        //merge sort
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
    void mergesort(vector<int>& nums,int left,int right)
    {
        if(left<right)
        {
            int mid=(left+right)/2;
            mergesort(nums,left,mid);
            mergesort(nums,mid+1,right);
            merge(nums,left,mid,right);
        }
    }
    void merge(vector<int>& nums,int left,int mid,int right)
    {
        int n1=mid-left+1;
        int n2=right-mid;
        vector<int>l1(n1),l2(n2);
        for(int i=0;i<n1;i++)
        {
            l1[i]=nums[left+i];
        }
        for(int i=0;i<n2;i++)
        {
            l2[i]=nums[mid+i+1];
        }
        int i=0,j=0,x=left;
        while(i<n1 && j<n2)
        {
            if(l1[i]<l2[j])
            {
                nums[x++]=l1[i++];
            }
            else{
                nums[x++]=l2[j++];
            }
        }
        while(i<n1)
        {
            nums[x++]=l1[i++];
        }
        while(j<n2)
        {
            nums[x++]=l2[j++];
        }
    }
};