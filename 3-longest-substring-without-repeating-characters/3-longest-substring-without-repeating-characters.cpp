
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       int j=0,i=0,ans=0;
        unordered_map<char,int>mp;
        while(j<s.size())
        {
            mp[s[j]]++;
            if(mp.size()==j-i+1)
            {
            if(mp.size()>ans)
            ans=mp.size();
            j++;
            }
            
            else if(mp.size()<j-i+1)
            {
                while(mp.size()<j-i+1)
                {
                    mp[s[i]]--;
                    if(mp[s[i]]==0)
                        mp.erase(s[i]);
                     i++;
                }
                j++;
               
            }
            
        }
        return ans;
    }
};