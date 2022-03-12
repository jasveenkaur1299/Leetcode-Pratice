class Solution {
public:
    int searchInsert(vector<int>& arr, int target)
    {
     int start=0;
        int end=arr.size()-1;
        int mid=start+(end-start)/2;
        int flag=0;
        while(start<=end)
        {
            mid=start+(end-start)/2;
            if(arr[mid]==target)
            {
               flag=1;
                return mid;
            }
            if(arr[mid]<target)
            {
                start=mid+1;
            }
            if(arr[mid]>target)
            {
                end=mid-1;
            }
        }
        return start;
        
    }
};