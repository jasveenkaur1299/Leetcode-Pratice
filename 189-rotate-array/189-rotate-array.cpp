class Solution {
public:
    void reverse(vector <int> &nums, int l,int r)
    {
        int i=l;
        int j=r;
        while(i<j)
        {
            int temp=nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int kk) {
        int k=kk%nums.size();
        reverse(nums,0,nums.size()-k-1);
        reverse(nums,nums.size()-k,nums.size()-1);
        reverse(nums,0,nums.size()-1);
        
    }
};