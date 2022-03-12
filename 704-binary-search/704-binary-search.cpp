class Solution {
public:
    int search(vector<int>& arr, int target) {
     int ans=-1;
     int start,end,mid;
     start=0;
     end=arr.size()-1;
     while(start<=end)
     {
         mid=start+(end-start)/2;
         if(arr[mid]<target)
         {
             start=mid+1;
         }
         else if(arr[mid]==target)
         {
             return mid;
         }
         else if(arr[mid]>target)
         {
             end=mid-1;
         }
     }
        return ans;
    }
};