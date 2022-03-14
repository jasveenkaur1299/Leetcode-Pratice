class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) 
    {
        int first=0;
        int second=numbers.size()-1;
        vector<int>  ans;
        while(first<second)
        {
            if(numbers[first]+numbers[second]==target){
                ans.push_back(first+1);
                ans.push_back(second+1);
                return ans;
                
            }
                
            else if(numbers[first]+numbers[second]<target)
            {
                first++;
            }
            else
            {
                second--;
            }
        }
        return ans;
        
    }
};